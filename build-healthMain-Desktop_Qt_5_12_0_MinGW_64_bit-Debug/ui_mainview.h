/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mainview
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QTextBrowser *headImg;
    QLineEdit *lineEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *workArea;
    QLineEdit *workTime;
    QLineEdit *workDescribe;
    QLineEdit *totalWorker;
    QLabel *label_5;
    QLCDNumber *timeLcd;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *addMember;
    QPushButton *nurseAssess;
    QPushButton *historyAssess;

    void setupUi(QMainWindow *Mainview)
    {
        if (Mainview->objectName().isEmpty())
            Mainview->setObjectName(QString::fromUtf8("Mainview"));
        Mainview->resize(642, 709);
        Mainview->setMinimumSize(QSize(642, 709));
        Mainview->setMaximumSize(QSize(641, 709));
        centralWidget = new QWidget(Mainview);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 70, 601, 271));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        headImg = new QTextBrowser(frame);
        headImg->setObjectName(QString::fromUtf8("headImg"));
        headImg->setGeometry(QRect(20, 10, 141, 171));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 230, 161, 24));
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(180, 10, 411, 251));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 409, 249));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 100, 30));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setLayoutDirection(Qt::RightToLeft);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 100, 30));
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::RightToLeft);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 200, 100, 30));
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::RightToLeft);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 140, 100, 30));
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::RightToLeft);
        label_4->setAlignment(Qt::AlignCenter);
        workArea = new QLineEdit(scrollAreaWidgetContents);
        workArea->setObjectName(QString::fromUtf8("workArea"));
        workArea->setGeometry(QRect(150, 20, 224, 30));
        workTime = new QLineEdit(scrollAreaWidgetContents);
        workTime->setObjectName(QString::fromUtf8("workTime"));
        workTime->setGeometry(QRect(150, 140, 224, 30));
        workDescribe = new QLineEdit(scrollAreaWidgetContents);
        workDescribe->setObjectName(QString::fromUtf8("workDescribe"));
        workDescribe->setGeometry(QRect(150, 80, 224, 30));
        totalWorker = new QLineEdit(scrollAreaWidgetContents);
        totalWorker->setObjectName(QString::fromUtf8("totalWorker"));
        totalWorker->setGeometry(QRect(150, 200, 224, 30));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 190, 100, 30));
        QFont font1;
        font1.setPointSize(12);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        timeLcd = new QLCDNumber(centralWidget);
        timeLcd->setObjectName(QString::fromUtf8("timeLcd"));
        timeLcd->setGeometry(QRect(290, 20, 321, 41));
        timeLcd->setSmallDecimalPoint(false);
        scrollArea_2 = new QScrollArea(centralWidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(20, 360, 601, 271));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 599, 269));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        addMember = new QPushButton(centralWidget);
        addMember->setObjectName(QString::fromUtf8("addMember"));
        addMember->setGeometry(QRect(530, 640, 91, 30));
        nurseAssess = new QPushButton(centralWidget);
        nurseAssess->setObjectName(QString::fromUtf8("nurseAssess"));
        nurseAssess->setGeometry(QRect(176, 660, 120, 45));
        historyAssess = new QPushButton(centralWidget);
        historyAssess->setObjectName(QString::fromUtf8("historyAssess"));
        historyAssess->setGeometry(QRect(346, 660, 120, 45));
        Mainview->setCentralWidget(centralWidget);

        retranslateUi(Mainview);

        QMetaObject::connectSlotsByName(Mainview);
    } // setupUi

    void retranslateUi(QMainWindow *Mainview)
    {
        Mainview->setWindowTitle(QApplication::translate("Mainview", "Mainview", nullptr));
        label->setText(QApplication::translate("Mainview", "\347\234\213\346\212\244\350\264\243\344\273\273\345\214\272", nullptr));
        label_2->setText(QApplication::translate("Mainview", "\345\267\245\344\275\234\346\246\202\350\277\260", nullptr));
        label_3->setText(QApplication::translate("Mainview", "\350\264\237\350\264\243\344\272\272\345\221\230\346\200\273\346\225\260", nullptr));
        label_4->setText(QApplication::translate("Mainview", "\350\264\243\344\273\273\346\227\266\346\256\265", nullptr));
        label_5->setText(QApplication::translate("Mainview", "\345\267\245\345\217\267", nullptr));
        addMember->setText(QApplication::translate("Mainview", "\346\267\273\345\212\240\346\210\220\345\221\230", nullptr));
        nurseAssess->setText(QApplication::translate("Mainview", "\346\212\244\347\220\206\350\257\204\344\274\260", nullptr));
        historyAssess->setText(QApplication::translate("Mainview", "\345\216\206\345\217\262\350\257\204\344\274\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mainview: public Ui_Mainview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
