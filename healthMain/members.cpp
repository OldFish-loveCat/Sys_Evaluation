#include "members.h"
#include "ui_members.h"
#include "mainview.h"

Members::Members(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Members)
{
    ui->setupUi(this);

}

Members::~Members()
{
    delete ui;
}

void Members::on_Buttoncheck_clicked()
{
    plandetails = new Plansdetails();
    plandetails->show();
}

void Members::setMemberName(QString name)
{
    ui->membername->setText(name);
}

void Members::getmakemember()
{
   ;
}
