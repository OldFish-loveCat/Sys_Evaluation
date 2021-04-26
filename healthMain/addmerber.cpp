#include "addmerber.h"
#include "ui_addmerber.h"
#include <QTextCodec>

AddMerber::AddMerber(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddMerber)
{
    ui->setupUi(this);
    ui->infoCommit->setEnabled(0);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));


    // 判断必填项姓名，性别和编号项是否有
    if(!((ui->name->text().isEmpty())||(ui->Sex->text().isEmpty())||(ui->Number->text().isEmpty())))
    {
        ui->infoCommit->setEnabled(1);
    }
}

AddMerber::~AddMerber()
{
    delete ui;
}

void AddMerber::on_healthAssess_clicked()
{
    healthassess = new HealthAssess();
    healthassess->show();
}
