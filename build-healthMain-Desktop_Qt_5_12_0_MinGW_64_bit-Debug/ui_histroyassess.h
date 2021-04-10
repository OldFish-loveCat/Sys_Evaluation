/********************************************************************************
** Form generated from reading UI file 'histroyassess.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTROYASSESS_H
#define UI_HISTROYASSESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistroyAssess
{
public:
    QLabel *label;

    void setupUi(QWidget *HistroyAssess)
    {
        if (HistroyAssess->objectName().isEmpty())
            HistroyAssess->setObjectName(QString::fromUtf8("HistroyAssess"));
        HistroyAssess->resize(744, 582);
        label = new QLabel(HistroyAssess);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 160, 721, 211));
        QFont font;
        font.setPointSize(100);
        label->setFont(font);

        retranslateUi(HistroyAssess);

        QMetaObject::connectSlotsByName(HistroyAssess);
    } // setupUi

    void retranslateUi(QWidget *HistroyAssess)
    {
        HistroyAssess->setWindowTitle(QApplication::translate("HistroyAssess", "Form", nullptr));
        label->setText(QApplication::translate("HistroyAssess", "\345\216\206\345\217\262\350\257\204\344\274\260UI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistroyAssess: public Ui_HistroyAssess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTROYASSESS_H
