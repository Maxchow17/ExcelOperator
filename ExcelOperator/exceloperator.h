#ifndef EXCELOPERATOR_H
#define EXCELOPERATOR_H

#include <QtWidgets/QMainWindow>
#include "ui_exceloperator.h"
#include <QProgressdialog>
#include "qworker.h"
#include <qthread.h>

//typedef struct _Found_and_Suffix
//			{
//				bool isFound;
//				QString FullPath;
//			} found_and_suffix;

class ExcelOperator : public QMainWindow
{
	Q_OBJECT

public:
	ExcelOperator(QWidget *parent = 0);
	~ExcelOperator();

public slots:
	void slotExecute();
	void slotBrowse();
	void slotBrowseExcelTarget();
	void completeTips(int nNotFoundPics);
	void showProgress(int i);
	void oneItemComplete(int i);
	void setAllShutDown();
	void setLockAspectRatio(bool isChecked);





private:
	QThread *thread;
	Qworker *worker;
	Ui::ExcelOperatorClass ui;
	REQUEST_INFO m_requestInfo;
	QProgressDialog *m_process;
	int m_total;
	bool m_isAllShutdown;

	void passSettingsToWorker();


signals:
	void endThread();
	
//	bool isExist(QString FilePath);
//	found_and_suffix ExcelOperator::PictureSuffixFitting(QString Dir, QString fileName);


};

#endif // EXCELOPERATOR_H


