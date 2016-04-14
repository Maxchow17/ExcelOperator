#ifndef QWORKER_H
#define QWORKER_H

#include <QAxObject>
#include <QObject>
#include <QMutex>
#include <QImage>
typedef struct _request_info{
		
	unsigned int start_row = 0;
	unsigned int start_column = 0;
	QString Excel_path = "";
	QString Pic_Dir = "";

}REQUEST_INFO;

typedef struct _height_width{
	double height;
	double width;
}HEIGHT_WIDTH;

typedef struct _Found_and_Suffix
{
	bool isFound;
	QString FullPath;
} found_and_suffix;

class Qworker : public QObject
{
	Q_OBJECT

public:
	Qworker(QObject *parent);
	~Qworker();

	REQUEST_INFO m_requestInfo;
	bool isWorking();

	HEIGHT_WIDTH getScaledPicHeight_Width(const QImage &image, 
										  HEIGHT_WIDTH cellHeight_Width);

	void lockAspectRatio();
	bool isAspectRatioLocked(); 

	void setFixedHeight();
	void setFixedWidth();

	bool isHeightFixed();
	bool isWidthFixed();

private:
	bool m_isWorking;
	bool isExist(QString FilePath);
	found_and_suffix PictureSuffixFitting(QString Dir, QString fileName);

protected:
	QAxObject* worksheet;
	QAxObject* worksheets;
	QAxObject* workbook;
	QAxObject* workbooks;
	QAxObject* excel;

	bool m_isLockAspectRatio;
	bool m_bFixedHeight;
	bool m_bFixedWidth;

	bool initializeExcelObjects();
	int getNumOfPicturesToInsert(int nRow, int StartFromColumn);
	int LoopForPasting(int StartFromRow, int StartFromColumn, int count);
	void ReleaseObjects();



public slots:
	void DoWork();
	

signals:
	void endThread();
	void finished();
	void Request();
	void StartAddingPic(int total);
	void oneItemCompleteW(int indicator);
	void numOfNotFoundPic(int num);
};

#endif // QWORKER_H
