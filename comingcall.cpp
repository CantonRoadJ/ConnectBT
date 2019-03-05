#include "comingcall.h"
#include "ui_comingcall.h"
#include "public.h"
#include "calling.h"

#include <fcntl.h>
#include <unistd.h>

ComingCALL::ComingCALL(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ComingCALL)
{
    ui->setupUi(this);
}

ComingCALL::~ComingCALL()
{
    delete ui;
}

void ComingCALL::setPhoneNumber(QString phoneNumber)
{
    ui->label_phonemumber->setText(phoneNumber);
}

void ComingCALL::on_pushButton_pickup_clicked()
{
     char tmp[100] = {0};

    strcpy(tmp,"AT#CE");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));

    callingWindow = new Calling();
    callingWindow->setPhoneNumber(ui->label_phonemumber->text());
    callingWindow->show();

    close();
}

void ComingCALL::on_pushButton_pickdown_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CF");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));

    close();
}
