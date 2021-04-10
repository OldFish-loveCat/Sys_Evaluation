#include "mainview.h"
#include "ui_mainview.h"
#include "histroyassess.h"
#include "nurseplans.h"

Mainview::Mainview(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Mainview)
{
    ui->setupUi(this);
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
