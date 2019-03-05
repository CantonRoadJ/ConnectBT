#include "disconnectbt.h"
#include "ui_disconnectbt.h"

DisconnectBT::DisconnectBT(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisconnectBT)
{
    ui->setupUi(this);
}

DisconnectBT::~DisconnectBT()
{
    delete ui;
}
