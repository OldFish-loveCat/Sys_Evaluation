#include "plansdetails.h"
#include "ui_plansdetails.h"

Plansdetails::Plansdetails(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Plansdetails)
{
    ui->setupUi(this);
}

Plansdetails::~Plansdetails()
{
    delete ui;
}
