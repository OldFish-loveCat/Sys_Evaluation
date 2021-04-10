/********************************************************************************
** Form generated from reading UI file 'nurseplans.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NURSEPLANS_H
#define UI_NURSEPLANS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NursePlans
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QScrollBar *verticalScrollBar;
    QTableWidget *nursePlan;

    void setupUi(QWidget *NursePlans)
    {
        if (NursePlans->objectName().isEmpty())
            NursePlans->setObjectName(QString::fromUtf8("NursePlans"));
        NursePlans->resize(541, 441);
        frame = new QFrame(NursePlans);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 20, 501, 411));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 30, 120, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAutoFillBackground(true);
        label->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 80, 120, 31));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 30, 120, 41));
        label_2->setFont(font);
        label_2->setAutoFillBackground(true);
        label_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 80, 120, 31));
        pushButton->setFont(font);
        verticalScrollBar = new QScrollBar(frame);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(470, 130, 20, 231));
        verticalScrollBar->setOrientation(Qt::Vertical);
        nursePlan = new QTableWidget(frame);
        if (nursePlan->columnCount() < 2)
            nursePlan->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        nursePlan->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        nursePlan->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        nursePlan->setObjectName(QString::fromUtf8("nursePlan"));
        nursePlan->setGeometry(QRect(20, 130, 451, 231));

        retranslateUi(NursePlans);

        QMetaObject::connectSlotsByName(NursePlans);
    } // setupUi

    void retranslateUi(QWidget *NursePlans)
    {
        NursePlans->setWindowTitle(QApplication::translate("NursePlans", "Form", nullptr));
        label->setText(QApplication::translate("NursePlans", "\346\234\200\350\277\221\350\257\204\344\274\260\347\273\223\346\236\234", nullptr));
        label_2->setText(QApplication::translate("NursePlans", "\345\216\206\345\217\262\350\257\204\344\274\260\347\273\223\346\236\234", nullptr));
        pushButton->setText(QApplication::translate("NursePlans", "\346\237\245\347\234\213\350\257\246\346\203\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem = nursePlan->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("NursePlans", "\346\212\244\347\220\206\350\256\241\345\210\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = nursePlan->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("NursePlans", "\345\256\214\346\210\220\346\203\205\345\206\265(\347\231\276\345\210\206\346\257\224)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NursePlans: public Ui_NursePlans {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NURSEPLANS_H
