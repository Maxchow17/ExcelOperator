/********************************************************************************
** Form generated from reading UI file 'exceloperator.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCELOPERATOR_H
#define UI_EXCELOPERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExcelOperatorClass
{
public:
    QWidget *centralWidget;
    QPushButton *ExcutePaster;
    QPushButton *FileBrowse;
    QLineEdit *PicDirEdit;
    QFrame *line;
    QLabel *label;
    QLineEdit *ExcelPathEdit;
    QPushButton *browseExcel;
    QLabel *label_2;
    QFrame *line_2;
    QLabel *label_6;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_5;
    QWidget *WaittingView;
    QLabel *label_7;
    QLineEdit *RowEdit;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *ColumnEdit;
    QLabel *label_11;
    QLabel *label_10;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *ApactRatioLock;
    QRadioButton *Pw_Cw;
    QRadioButton *Ph_Ch;

    void setupUi(QMainWindow *ExcelOperatorClass)
    {
        if (ExcelOperatorClass->objectName().isEmpty())
            ExcelOperatorClass->setObjectName(QStringLiteral("ExcelOperatorClass"));
        ExcelOperatorClass->resize(486, 378);
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/refresh-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExcelOperatorClass->setWindowIcon(icon);
        ExcelOperatorClass->setStyleSheet(QStringLiteral("background-color: rgb(239, 255, 238);"));
        centralWidget = new QWidget(ExcelOperatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ExcutePaster = new QPushButton(centralWidget);
        ExcutePaster->setObjectName(QStringLiteral("ExcutePaster"));
        ExcutePaster->setGeometry(QRect(210, 340, 75, 23));
        ExcutePaster->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        FileBrowse = new QPushButton(centralWidget);
        FileBrowse->setObjectName(QStringLiteral("FileBrowse"));
        FileBrowse->setGeometry(QRect(350, 130, 51, 20));
        FileBrowse->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        PicDirEdit = new QLineEdit(centralWidget);
        PicDirEdit->setObjectName(QStringLiteral("PicDirEdit"));
        PicDirEdit->setGeometry(QRect(140, 130, 201, 20));
        PicDirEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 70, 431, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 90, 241, 31));
        label->setStyleSheet(QStringLiteral("font: 75 11pt \"Arial Rounded MT Bold\";"));
        label->setAlignment(Qt::AlignCenter);
        ExcelPathEdit = new QLineEdit(centralWidget);
        ExcelPathEdit->setObjectName(QStringLiteral("ExcelPathEdit"));
        ExcelPathEdit->setGeometry(QRect(140, 50, 201, 20));
        ExcelPathEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        browseExcel = new QPushButton(centralWidget);
        browseExcel->setObjectName(QStringLiteral("browseExcel"));
        browseExcel->setGeometry(QRect(350, 50, 51, 21));
        browseExcel->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 10, 241, 31));
        label_2->setStyleSheet(QStringLiteral("font: 75 11pt \"Arial Rounded MT Bold\";"));
        label_2->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 150, 431, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 310, 251, 20));
        label_6->setStyleSheet(QStringLiteral("font: 75 11pt \"Arial Rounded MT Bold\";"));
        label_6->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 91, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 75 16pt \"Adobe Gothic Std B\";\n"
"color: rgb(144, 229, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 75 16pt \"Adobe Gothic Std B\";\n"
"color: rgb(144, 229, 255);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("font: 75 16pt \"Adobe Gothic Std B\";\n"
"color: rgb(144, 229, 255);"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        WaittingView = new QWidget(centralWidget);
        WaittingView->setObjectName(QStringLiteral("WaittingView"));
        WaittingView->setGeometry(QRect(80, 150, 361, 41));
        WaittingView->setStyleSheet(QLatin1String("background-color: rgb(255, 230, 213);\n"
"border-color: rgb(255, 255, 127);"));
        label_7 = new QLabel(WaittingView);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 10, 301, 31));
        label_7->setStyleSheet(QStringLiteral("font: italic 18pt \"Adobe Devanagari\";"));
        label_7->setAlignment(Qt::AlignCenter);
        RowEdit = new QLineEdit(centralWidget);
        RowEdit->setObjectName(QStringLiteral("RowEdit"));
        RowEdit->setGeometry(QRect(230, 200, 31, 20));
        RowEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        RowEdit->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 200, 111, 21));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(270, 200, 31, 21));
        ColumnEdit = new QLineEdit(centralWidget);
        ColumnEdit->setObjectName(QStringLiteral("ColumnEdit"));
        ColumnEdit->setGeometry(QRect(300, 200, 31, 20));
        ColumnEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        ColumnEdit->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(340, 200, 41, 21));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(120, 170, 241, 21));
        label_10->setStyleSheet(QStringLiteral("font: 75 11pt \"Arial Rounded MT Bold\";"));
        label_10->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(130, 230, 231, 74));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ApactRatioLock = new QCheckBox(verticalLayoutWidget);
        ApactRatioLock->setObjectName(QStringLiteral("ApactRatioLock"));
        ApactRatioLock->setStyleSheet(QStringLiteral("font: 75 8pt \"Berlin Sans FB\";"));

        verticalLayout_2->addWidget(ApactRatioLock);

        Pw_Cw = new QRadioButton(verticalLayoutWidget);
        Pw_Cw->setObjectName(QStringLiteral("Pw_Cw"));

        verticalLayout_2->addWidget(Pw_Cw);

        Ph_Ch = new QRadioButton(verticalLayoutWidget);
        Ph_Ch->setObjectName(QStringLiteral("Ph_Ch"));

        verticalLayout_2->addWidget(Ph_Ch);

        ExcelOperatorClass->setCentralWidget(centralWidget);
        layoutWidget->raise();
        ExcutePaster->raise();
        FileBrowse->raise();
        PicDirEdit->raise();
        label->raise();
        ExcelPathEdit->raise();
        browseExcel->raise();
        label_2->raise();
        line_2->raise();
        line->raise();
        label_6->raise();
        RowEdit->raise();
        label_8->raise();
        label_9->raise();
        ColumnEdit->raise();
        label_11->raise();
        label_10->raise();
        verticalLayoutWidget->raise();
        WaittingView->raise();

        retranslateUi(ExcelOperatorClass);
        QObject::connect(ExcutePaster, SIGNAL(clicked()), ExcelOperatorClass, SLOT(slotExecute()));
        QObject::connect(FileBrowse, SIGNAL(clicked()), ExcelOperatorClass, SLOT(slotBrowse()));
        QObject::connect(browseExcel, SIGNAL(clicked()), ExcelOperatorClass, SLOT(slotBrowseExcelTarget()));
        QObject::connect(ApactRatioLock, SIGNAL(clicked(bool)), ExcelOperatorClass, SLOT(setLockAspectRatio(bool)));
        QObject::connect(Pw_Cw, SIGNAL(clicked(bool)), ExcelOperatorClass, SLOT(setFixedWidth()));
        QObject::connect(Ph_Ch, SIGNAL(clicked()), ExcelOperatorClass, SLOT(setFixedHeight()));

        QMetaObject::connectSlotsByName(ExcelOperatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *ExcelOperatorClass)
    {
        ExcelOperatorClass->setWindowTitle(QApplication::translate("ExcelOperatorClass", "Pictures Paster", 0));
        ExcutePaster->setText(QApplication::translate("ExcelOperatorClass", "Execute", 0));
        FileBrowse->setText(QApplication::translate("ExcelOperatorClass", "browse", 0));
        label->setText(QApplication::translate("ExcelOperatorClass", "select a picture directory", 0));
        browseExcel->setText(QApplication::translate("ExcelOperatorClass", "browse", 0));
        label_2->setText(QApplication::translate("ExcelOperatorClass", "select the target Excel file", 0));
        label_6->setText(QApplication::translate("ExcelOperatorClass", "Press the Button below to Start", 0));
        label_3->setText(QApplication::translate("ExcelOperatorClass", "Step 1:", 0));
        label_4->setText(QApplication::translate("ExcelOperatorClass", "Step 2:", 0));
        label_5->setText(QApplication::translate("ExcelOperatorClass", "Step 3:", 0));
        label_7->setText(QApplication::translate("ExcelOperatorClass", "Please wait for a while...", 0));
        RowEdit->setText(QApplication::translate("ExcelOperatorClass", "13", 0));
        label_8->setText(QApplication::translate("ExcelOperatorClass", "Item No starts at", 0));
        label_9->setText(QApplication::translate("ExcelOperatorClass", "Row ,", 0));
        ColumnEdit->setText(QApplication::translate("ExcelOperatorClass", "2", 0));
        label_11->setText(QApplication::translate("ExcelOperatorClass", "Column", 0));
        label_10->setText(QApplication::translate("ExcelOperatorClass", "Settings", 0));
        ApactRatioLock->setText(QApplication::translate("ExcelOperatorClass", "Lock pictures' Aspect Ratio", 0));
        Pw_Cw->setText(QApplication::translate("ExcelOperatorClass", "Pictures' width = Cells' width", 0));
        Ph_Ch->setText(QApplication::translate("ExcelOperatorClass", "Pictures' height = Cells' height", 0));
    } // retranslateUi

};

namespace Ui {
    class ExcelOperatorClass: public Ui_ExcelOperatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCELOPERATOR_H
