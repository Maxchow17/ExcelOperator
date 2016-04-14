#include "qworker.h"
#include <QFileDialog>
#include <QFile>
#include <QProgressDialog>
#include <QMessageBox>
#include "qt_windows.h"

Qworker::Qworker(QObject *parent)
	: QObject(parent)
{
	m_isWorking = false;
	m_isLockAspectRatio = false;


	worksheet = NULL;
	worksheets = NULL;
	workbook = NULL;
	workbooks = NULL;
	excel = NULL;
}

Qworker::~Qworker()
{
	if (worksheet != NULL)
	{
		delete worksheet;
	}
	if (worksheets != NULL)
	{
		delete worksheets;
	}
	if (workbook != NULL)
	{
		delete workbook;
	}
	if (workbooks != NULL)
	{
		workbook->dynamicCall("Save()");
		workbook->dynamicCall("Close()");//关闭工作簿
		delete workbooks;
	}
	if (excel != NULL)
	{
		excel->dynamicCall("Quit()");//关闭excel
		delete excel;
	}
	OleUninitialize();
}

bool Qworker::isWorking()
{
	return	m_isWorking;
}

void Qworker::DoWork()
{
	m_isWorking = true;
	if(!initializeExcelObjects())
		return;

	int StartFromRow = m_requestInfo.start_row;
	int StartFromColumn = m_requestInfo.start_column;
	int count = 0;

	count = getNumOfPicturesToInsert(StartFromRow,StartFromColumn);
	int nPictureNotFound = LoopForPasting(StartFromRow,StartFromColumn,count);
	ReleaseObjects();
	emit numOfNotFoundPic(nPictureNotFound);
	m_isWorking = false;
	emit finished();
}

bool Qworker::initializeExcelObjects()
{
	HRESULT r = OleInitialize(0);
	if (r != S_OK && r != S_FALSE) {
		qWarning("Qt: Could not initialize OLE (error %x)", (unsigned int)r);
		return false;
	}

	//initialize Objects
	excel = new QAxObject;
	excel->setControl("Excel.Application");//连接Excel控件
	excel->dynamicCall("SetVisible (bool Visible)", "false");//不显示窗体
	excel->setProperty("DisplayAlerts", false);//不显示任何警告信息。如果为true那么在关闭是会出现类似“文件已修改，是否保存”的提示

	//open a workbook
	workbooks = excel->querySubObject("WorkBooks");//获取工作簿集合

	QString Trgt_Excel = m_requestInfo.Excel_path;
	workbooks->dynamicCall("Open (const QString&)", Trgt_Excel);

	//determine the worksheet
	workbook = excel->querySubObject("ActiveWorkBook");//获取当前工作簿
	worksheets = workbook->querySubObject("Sheets");//获取工作表集合
	worksheet = worksheets->querySubObject("Item(int)", 1);//获取工作表集合的工作表1，即sheet1
	return true;
}

int Qworker::getNumOfPicturesToInsert(int nRow,int StartFromColumn)
{
	int count = 0;
	QString strItemNum;
	strItemNum = "";

	while (1)
	{
		QAxObject * cellNo = worksheet->querySubObject("Cells(int,int)", nRow, StartFromColumn);
		strItemNum = cellNo->dynamicCall("Value2()").toString();
		nRow++;

		if (!strItemNum.isEmpty())
			count++;
		else
			break;
	}

	emit StartAddingPic(count);
	return count;
}

int Qworker::LoopForPasting(int StartFromRow, int StartFromColumn, int count)
{
	//Loop for Pasting Pictures
	int nPicturesNotFound = 0;
	for (int i = StartFromRow; i <= count + StartFromRow - 1; i++)
	{
		QAxObject * cellNo = worksheet->querySubObject("Cells(int,int)", i, StartFromColumn);
		QAxObject * cellPic = worksheet->querySubObject("Cells(int,int)", i, StartFromColumn + 1);

		double CellLeft = cellPic->property("Left").toDouble();
		double CellTop = cellPic->property("Top").toDouble();
		double CellWidth = cellPic->property("Width").toDouble();
		double CellHeight = cellPic->property("Height").toDouble();


		QString fileName = cellNo->dynamicCall("Value2()").toString();

		found_and_suffix checkResult;
		checkResult.isFound = false;
		checkResult.FullPath = "";

		QString PicDir = m_requestInfo.Pic_Dir;
		checkResult = PictureSuffixFitting(PicDir, fileName);

		if (!checkResult.isFound)
		{
			nPicturesNotFound++;
			continue;
		}


		double PicHeight = CellHeight;
		double PicWidth = CellWidth;

		if (isAspectRatioLocked())
		{
			HEIGHT_WIDTH cell_height_width;
			cell_height_width.height = PicHeight;
			cell_height_width.width = PicWidth;

			HEIGHT_WIDTH scaledPichight_width = getScaledPicHeight_Width(QImage(checkResult.FullPath), cell_height_width);
			PicHeight = scaledPichight_width.height;
			PicWidth = scaledPichight_width.width;

		}

		QAxObject * shapes = worksheet->querySubObject("Shapes");
		shapes->dynamicCall("AddPicture (const QString& ,bool,bool,double,double,double,double)",
			checkResult.FullPath, false, true, CellLeft, CellTop, PicWidth, PicHeight);

		emit oneItemCompleteW(i - StartFromRow);
	}
	return nPicturesNotFound;
}

void Qworker::ReleaseObjects()
{
	//Release and Delete all Objects
	workbook->dynamicCall("Save()");
	workbook->dynamicCall("Close()");//关闭工作簿
	excel->dynamicCall("Quit()");//关闭excel
	
	delete worksheet;
	delete worksheets;
	delete workbook;
	delete workbooks;
	delete excel;

	excel = NULL;
	worksheet = NULL;
	worksheets = NULL;
	workbook = NULL;
	workbooks = NULL;

	OleUninitialize();
}

found_and_suffix Qworker::PictureSuffixFitting(QString Dir, QString fileName)
{
	found_and_suffix res;
	res.FullPath = "";
	res.isFound = false;

	const int TypesOfSuffix = 5;
	QString suffixs[TypesOfSuffix] = { ".png", ".jpg", ".jpeg", ".bmp", ".gif" };
	for (size_t i = 0; i < TypesOfSuffix; i++)
	{
		QString fileToBeVerifed = Dir + "\\" + fileName + suffixs[i];

		if (isExist(fileToBeVerifed))
		{
			res.FullPath = fileToBeVerifed;
			res.isFound = true;

			return res;
		}
	}

	res.FullPath = "";
	res.isFound = false;

	return res;
}

bool Qworker::isExist(QString FilePath)
{
	return QFile::exists(FilePath);
}

HEIGHT_WIDTH Qworker::getScaledPicHeight_Width(const QImage &image, HEIGHT_WIDTH cellHeight_Width)
{
	HEIGHT_WIDTH res;

	if (isHeightFixed())
	{
		res.height = cellHeight_Width.height;
		double delta = (double)(image.height()) / (double)(image.width());
		res.width = cellHeight_Width.height / delta;
	}
	else if (isWidthFixed())
	{
		res.width = cellHeight_Width.width;
		double delta = (double)(image.width()) / (double)(image.height());
		res.height = cellHeight_Width.width / delta;
	}

	return res;
}



void Qworker::lockAspectRatio()
{
	m_isLockAspectRatio = true;
}

bool Qworker::isAspectRatioLocked()
{
	return m_isLockAspectRatio;
}



void Qworker::setFixedHeight()
{
	m_bFixedHeight = true;
	m_bFixedWidth = false;
}

void Qworker::setFixedWidth()
{
	m_bFixedHeight = false;
	m_bFixedWidth = true;
}

bool Qworker::isHeightFixed()
{
	return m_bFixedHeight;
}

bool Qworker::isWidthFixed()
{
	return m_bFixedWidth;
}