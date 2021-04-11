#include "addmerber.h"
#include "ui_addmerber.h"

AddMerber::AddMerber(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddMerber)
{
    ui->setupUi(this);
}

AddMerber::~AddMerber()
{
    delete ui;
}
