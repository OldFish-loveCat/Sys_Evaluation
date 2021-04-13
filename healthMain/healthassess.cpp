#include "healthassess.h"
#include "ui_healthassess.h"

HealthAssess::HealthAssess(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HealthAssess)
{
    ui->setupUi(this);
}

HealthAssess::~HealthAssess()
{
    delete ui;
}

void HealthAssess::on_goBack_clicked()
{
    this->hide();
}
