#include "calling_number.h"
#include "ui_calling_number.h"
#include "public.h"
#include <fcntl.h>
#include <unistd.h>

Calling_number::Calling_number(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calling_number)
{
    ui->setupUi(this);
}

Calling_number::~Calling_number()
{
    delete ui;
}

void Calling_number::on_pushButton2_keyboard_clicked()
{
    this->close();
}

void Calling_number::on_pushButton2_number1_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CX");
    strcat(tmp,"1");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void Calling_number::on_pushButton2_number2_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CX");
    strcat(tmp,"2");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void Calling_number::on_pushButton2_number3_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CX");
    strcat(tmp,"3");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void Calling_number::on_pushButton2_number4_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CX");
    strcat(tmp,"4");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void Calling_number::on_pushButton2_number5_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CX");
    strcat(tmp,"5");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void Calling_number::on_pushButton2_number6_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CX");
    strcat(tmp,"6");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void Calling_number::on_pushButton2_number7_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CX");
    strcat(tmp,"7");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void Calling_number::on_pushButton2_number8_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CX");
    strcat(tmp,"8");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void Calling_number::on_pushButton2_number9_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CX");
    strcat(tmp,"9");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void Calling_number::on_pushButton2_star_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CX");
    strcat(tmp,"*");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void Calling_number::on_pushButton2_number0_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CX");
    strcat(tmp,"0");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void Calling_number::on_pushButton2_sign_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#CX");
    strcat(tmp,"#");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}
