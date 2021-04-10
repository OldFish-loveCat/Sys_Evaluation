/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *frame;
    QPushButton *Cancel;
    QLabel *NoteID;
    QPushButton *LogIn;
    QLabel *label;
    QLineEdit *Password;
    QLabel *NotePsd;
    QPushButton *Registration;
    QLineEdit *IDnum;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setWindowModality(Qt::ApplicationModal);
        Dialog->resize(590, 448);
        Dialog->setMinimumSize(QSize(590, 448));
        Dialog->setMaximumSize(QSize(590, 448));
        frame = new QFrame(Dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 230, 551, 201));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Cancel = new QPushButton(frame);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(410, 160, 120, 31));
        NoteID = new QLabel(frame);
        NoteID->setObjectName(QString::fromUtf8("NoteID"));
        NoteID->setGeometry(QRect(410, 30, 121, 31));
        QFont font;
        font.setPointSize(12);
        NoteID->setFont(font);
        NoteID->setAlignment(Qt::AlignCenter);
        LogIn = new QPushButton(frame);
        LogIn->setObjectName(QString::fromUtf8("LogIn"));
        LogIn->setGeometry(QRect(40, 160, 120, 31));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 81, 31));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        Password = new QLineEdit(frame);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(140, 100, 251, 31));
        Password->setEchoMode(QLineEdit::Password);
        NotePsd = new QLabel(frame);
        NotePsd->setObjectName(QString::fromUtf8("NotePsd"));
        NotePsd->setGeometry(QRect(410, 100, 121, 31));
        NotePsd->setFont(font);
        NotePsd->setAlignment(Qt::AlignCenter);
        Registration = new QPushButton(frame);
        Registration->setObjectName(QString::fromUtf8("Registration"));
        Registration->setGeometry(QRect(230, 160, 120, 31));
        IDnum = new QLineEdit(frame);
        IDnum->setObjectName(QString::fromUtf8("IDnum"));
        IDnum->setGeometry(QRect(140, 30, 251, 31));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 100, 81, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 60, 391, 91));
        QFont font1;
        font1.setPointSize(43);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        label_3->setFont(font1);
        label_3->setFocusPolicy(Qt::WheelFocus);
        label_3->setAutoFillBackground(false);
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        Cancel->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", nullptr));
        NoteID->setText(QString());
        LogIn->setText(QApplication::translate("Dialog", "\347\231\273\345\275\225", nullptr));
        label->setText(QApplication::translate("Dialog", "\350\264\246  \345\217\267", nullptr));
        Password->setPlaceholderText(QApplication::translate("Dialog", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201", nullptr));
        NotePsd->setText(QString());
        Registration->setText(QApplication::translate("Dialog", "\346\263\250\345\206\214", nullptr));
        IDnum->setPlaceholderText(QApplication::translate("Dialog", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\350\264\246\345\217\267", nullptr));
        label_2->setText(QApplication::translate("Dialog", "\345\257\206  \347\240\201", nullptr));
        label_3->setText(QApplication::translate("Dialog", "\346\254\242\350\277\216\344\275\277\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
