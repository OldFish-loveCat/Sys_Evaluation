#include "histroyassess.h"
#include "ui_histroyassess.h"

HistroyAssess::HistroyAssess(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HistroyAssess)
{
    ui->setupUi(this);
}

HistroyAssess::~HistroyAssess()
{
    delete ui;
}
