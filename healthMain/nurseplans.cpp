#include "nurseplans.h"
#include "ui_nurseplans.h"


NursePlans::NursePlans(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NursePlans)
{
    ui->setupUi(this);
}

NursePlans::~NursePlans()
{
    delete ui;
}

void NursePlans::on_pushButton_clicked()
{
    historyassess = new HistroyAssess();
    historyassess->show();
}

void NursePlans::on_mplans_clicked()
{
    plandetails = new Plansdetails();
    plandetails->show();
}
