#include "mainview.h"
#include "ui_mainview.h"
#include "histroyassess.h"
#include "nurseplans.h"
#include "QMessageBox"

Mainview::Mainview(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Mainview)
{
    ui->setupUi(this);
    menber = 0;
    ui->showmember->hide();

}

Mainview::~Mainview()
{
    delete ui;
}

void Mainview::on_historyAssess_clicked()
{
    historyassess = new HistroyAssess();
    historyassess->show();
}

void Mainview::on_nurseAssess_clicked()
{
    nurseplans = new NursePlans();
    nurseplans->show();
}

void Mainview::on_addMember_clicked()
{
    if (QMessageBox::Yes == QMessageBox::question(this,
                                                  tr("Question"),
                                                  tr("确认创建新成员吗?"),
                                                  QMessageBox::Yes | QMessageBox::No,
                                                  QMessageBox::Yes))
    {
        addmerber = new AddMerber();
        addmerber->show();
        ui->showmember->show();
    }
    else
    {
        QMessageBox::information(this, tr("已确认"), tr("成员创建已取消！"));
    }
    menber ++;
}

void Mainview::showmembers()
{
    ;
}




void Mainview::on_showmember_clicked()
{
    members = new Members();
    members->show();
}
