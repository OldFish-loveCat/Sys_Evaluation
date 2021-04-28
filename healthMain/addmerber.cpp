#include "addmerber.h"
#include "ui_addmerber.h"
#include <QTextCodec>

AddMerber::AddMerber(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddMerber)
{
    ui->setupUi(this);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));

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

void AddMerber::on_infoCommit_clicked()
{

}
