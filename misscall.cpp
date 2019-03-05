#include "misscall.h"
#include "ui_misscall.h"

MissCALL::MissCALL(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MissCALL)
{
    ui->setupUi(this);
}

MissCALL::~MissCALL()
{
    delete ui;
}
