#include "exceloperator.h"
#include <QAxObject>
#include <QFileDialog>
#include <QFile>
#include <QProgressDialog>
#include <QMessageBox>




ExcelOperator::ExcelOperator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.WaittingView->setVisible(false);

	ui.Pw_Cw->setEnabled(false);
	ui.Ph_Ch->setEnabled(false);
	ui.Pw_Cw->setChecked(false);
	ui.Ph_Ch->setChecked(true);

	m_total = 0;

	worker = NULL;
	thread = NULL;

	m_isAllShutdown = true;	

}

ExcelOperator::~ExcelOperator()
{
	emit endThread();
	while (!m_isAllShutdown)
	{
		_sleep(10);
	}
	if (thread != NULL)
	{
		delete thread;
	}

	if (worker != NULL)
	{
		delete worker;
	}
	
}

void ExcelOperator::oneItemComplete(int i)
{
	m_process->setValue(i);
}

void ExcelOperator::showProgress(int i)
{
	ui.WaittingView->hide();
	repaint();

	m_total = i;
	m_process = new QProgressDialog(this);
	m_process->setModal(true);
	m_process->setLabelText(tr("processing..."));
	m_process->setRange(0, m_total);
	m_process->show();
	m_process->setCancelButton(0);

}

void ExcelOperator::completeTips(int nNotFoundPics)
{
	delete m_process;
	if (nNotFoundPics == 0)
	{
		QMessageBox::about(this, "tips", "completed!");
		ui.ExcutePaster->setEnabled(true);
	}
	else
	{
		QString strTip = QString("%1 picture(s) not found in the dir !").arg(nNotFoundPics);
		QMessageBox::about(this, "tips", strTip);
		ui.ExcutePaster->setEnabled(true);
	}

}

void ExcelOperator::slotBrowseExcelTarget()
{
	QFileDialog fileDlg;
	QString ExcelPath = QFileDialog::getOpenFileName(this, tr("Select a Target"),
													".",
													tr("Excel (*.xls *.xlsx)"));
	ui.ExcelPathEdit->setText(ExcelPath);
}


void ExcelOperator::slotBrowse()
{
	QFileDialog fileDlg;
	QString Picdir = QFileDialog::getExistingDirectory(this, tr("Select a Directory"), ".",
														QFileDialog::ShowDirsOnly |
														QFileDialog::DontResolveSymlinks);
	ui.PicDirEdit->setText(Picdir);
}




void ExcelOperator::slotExecute()
{
	ui.ExcutePaster->setEnabled(false);

	worker = new Qworker(0);
	thread = new QThread();

	//move execute process to thread
	worker->moveToThread(thread);

	//connect slots and signals
	connect(worker, SIGNAL(Request()), thread, SLOT(start()));
	connect(thread, SIGNAL(started()), worker, SLOT(DoWork()));
	connect(worker, SIGNAL(StartAddingPic(int)), this, SLOT(showProgress(int)));
	connect(worker, SIGNAL(oneItemCompleteW(int)), this, SLOT(oneItemComplete(int)));
	connect(worker, SIGNAL(numOfNotFoundPic(int)), this, SLOT(completeTips(int)));
	connect(worker, SIGNAL(finished()), this, SLOT(completeTips(int)));
	connect(worker, SIGNAL(finished()), thread, SLOT(quit()), Qt::DirectConnection);
	connect(this, SIGNAL(endThread()), thread, SLOT(terminate()), Qt::DirectConnection);
	connect(thread, SIGNAL(finished()), this, SLOT(setAllShutDown()), Qt::DirectConnection);

	//show waitting window for a while.
	ui.WaittingView->show();
	repaint();

	m_requestInfo.Excel_path = ui.ExcelPathEdit->text();
	m_requestInfo.Pic_Dir = ui.PicDirEdit->text();
	m_requestInfo.start_row = ui.RowEdit->text().toInt();
	m_requestInfo.start_column = ui.ColumnEdit->text().toInt();

	//check  wheather target excel has been selected.
	if (m_requestInfo.Excel_path.isEmpty())
	{
		QMessageBox::about(this, "Tips", "please select a excel file!");
		ui.ExcutePaster->setEnabled(true);
		ui.WaittingView->hide();
		repaint();
		return;
	}
	//check wheather picture dir has been selected.
	if (m_requestInfo.Pic_Dir.isEmpty())
	{
		QMessageBox::about(this, "Tips", "please select a directory \nwhich contains pictures!");
		ui.ExcutePaster->setEnabled(true);
		ui.WaittingView->hide();
		repaint();
		return;
	}
	//pass ui settings to worker
	passSettingsToWorker();
	m_isAllShutdown = false;

}

void ExcelOperator::setAllShutDown()
{
	m_isAllShutdown = true;
}

void ExcelOperator::passSettingsToWorker()
{
	if (ui.ApactRatioLock->isChecked())
	{
		worker->lockAspectRatio();
	}

	if (ui.Pw_Cw->isChecked())
	{
		worker->setFixedWidth();
	}
	else
	{
		worker->setFixedHeight();
	}
	worker->m_requestInfo = m_requestInfo;
	worker->Request();
}


void ExcelOperator::setLockAspectRatio(bool isChecked)
{
	ui.Ph_Ch->setEnabled(isChecked);
	ui.Pw_Cw->setEnabled(isChecked);
}