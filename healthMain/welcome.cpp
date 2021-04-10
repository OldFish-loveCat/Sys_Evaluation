#include "welcome.h"
#include "ui_welcome.h"
#include "mainview.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->NoteID->setText("信息未写入");
    ui->NotePsd->setText("信息未写入");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_LogIn_clicked()
{
    this->hide();
    mainview = new Mainview();
    mainview->show();
}
