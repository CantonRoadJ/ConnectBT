#include "calling.h"
#include "ui_calling.h"
#include "calling_number.h"
#include "public.h"
#include <fcntl.h>
#include <unistd.h>

Calling::Calling(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calling)
{
    ui->setupUi(this);
    //connect(,SIGNAL(callPhoneNumber(QString)),this,SLOT(setPhoneNumber(QString)));
    this->setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint |Qt::WindowFullscreenButtonHint);
    this->showFullScreen();
}

void Calling::setPhoneNumber(QString phoneNumber)
{
    ui->label_phoneNumber->setText(phoneNumber);
}

Calling::~Calling()
{
    delete ui;
}

//挂断
void Calling::on_pushButton_closeConnect_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CG");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));

    close();
}

void Calling::on_pushButton_Connect_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CO");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void Calling::on_pushButton_keyboard_clicked()
{
    number_keybroad = new Calling_number();
    number_keybroad->show();
}
