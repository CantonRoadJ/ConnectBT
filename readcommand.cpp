#include "readcommand.h"
#include "public.h"
#include <fcntl.h>
#include <unistd.h>
#include <QDebug>
#include <QMessageBox>
#include "comingcall.h"

ReadCommand::ReadCommand(QObject *parent):QThread(parent)
{

}

void ReadCommand::run()
{
    while (1)
    {
         //qDebug() << "run";
         ReadBTCommand();
    }
}

void  ReadCommand::ReadBTCommand()
{
    char test_command[1024] = {0};

    if (fd > 0)
    {
        ::read(fd,&test_command[0],1024);
        ScanfCommand(&test_command[0]);
        qDebug() << test_command;
    }
}

void ReadCommand::ScanfCommand(char * command)
{
    int  count = 0;
    char incallcommand[1024] = {0};
    int testcount =1024;
    int i = 0;
    while(i<testcount)
    {
        if ('\n' == *command)
        {
            qDebug()<<"下一条指令";

            if (count > 0) {

                if ( (incallcommand[0] =='I') &&(incallcommand[1] =='D'))
                {
                    QString phoneNumber;
                    phoneNumber = incallcommand;
                    phoneNumber = phoneNumber.right(phoneNumber.length()-2);
                    qDebug() << "来电 emit comingcallShow";
                    //ComingCALL comingcall;
                    //comingcall.show();
                    emit comingcallShow(phoneNumber);


                    memset(incallcommand,0,1024);
                }
                else if ( (incallcommand[0] =='I') &&(incallcommand[1] =='R'))
                {
                    {
                        QString phoneNumber;
                        phoneNumber = incallcommand;
                        phoneNumber = phoneNumber.right(phoneNumber.length()-2);
                        qDebug() << "去电 emit outtingcallShow";
                        //ComingCALL comingcall;
                        //comingcall.show();
                        emit outtingcallShow(phoneNumber);

                        memset(incallcommand,0,1024);
                    }
                }
                else if ( (incallcommand[0] =='P') &&(incallcommand[1] =='B'))
                {
                        int NameLength = 0;
                        int PhoneNumberLength = 0;

                        //解释名字
                        QString NameLengthString = "";
                        NameLengthString += incallcommand[2];
                        NameLengthString += incallcommand[3];
                        NameLength = NameLengthString.toInt();
                        qDebug() <<"NameLengthString is "<<NameLength;
                        QString NameString;
                        char Name[NameLength+1] ={0};
                        //QString  Name  = "";
                        for(int i=0;i<NameLength;i++)
                        {
                            Name[i] = incallcommand[6+i];
                        }
                        NameString = Name;
                        qDebug() <<"Name is "<<NameString;

                        //解释手机号码
                        QString PhoneNumberLengthString = "";
                        PhoneNumberLengthString += incallcommand[4];
                        PhoneNumberLengthString += incallcommand[5];
                        PhoneNumberLength = PhoneNumberLengthString.toInt();
                        qDebug() <<"PhoneNumberLengthString is "<<PhoneNumberLength;
                        QString PhoneNumberString;
                        char PhoneNumber[PhoneNumberLength+1] ={0};
                        //QString  Name  = "";
                        for(int i=0;i<PhoneNumberLength;i++)
                        {
                            PhoneNumber[i] = incallcommand[6+NameLength+i];
                        }
                        PhoneNumberString = PhoneNumber;
                        qDebug() <<"phone is "<<PhoneNumberString;

                        emit contactsShow(NameString,PhoneNumberString);

                        memset(incallcommand,0,1024);
                }
                else if ( (incallcommand[0] =='P') &&(incallcommand[1] =='D'))
                {
                    qDebug()<<"send recordsShow signal";

                    QString TypeString="";
                    QString NameString="";
                    QString PhoneString="";
                    QString TimeString="";

                    //解释类型
                    char chType[2] ={0};
                    chType[0] = incallcommand[2];
                    TypeString = chType;
                    qDebug()<<"TypeString is "<<TypeString;

                    //解释名字
                    int NameCount;
                    int tmpCount;
                    for ( NameCount=0;incallcommand[3+NameCount] != 0xff;NameCount++)
                    {
                    }
                    char chName[NameCount+1]={0};
                    for(tmpCount=0;tmpCount<NameCount;tmpCount++)
                    {
                        chName[tmpCount] =  incallcommand[3+tmpCount];
                    }
                    NameString = chName;
                    qDebug()<<"NameString is"<<NameString;

                    //解释电话
                    int phoneCount;
                    for ( phoneCount=0;incallcommand[3+NameCount+1+phoneCount] != 0xff;phoneCount++)
                    {
                    }
                    char chPhone[phoneCount+1]={0};
                    for(tmpCount=0;tmpCount<phoneCount;tmpCount++)
                    {
                        chPhone[tmpCount] =  incallcommand[3+NameCount+1+tmpCount];
                    }
                    PhoneString = chPhone;
                    qDebug()<<"PhoneString is"<<PhoneString;

                    //解释时间
                    int TimeCount;
                    for ( TimeCount=0;incallcommand[3+NameCount+1+phoneCount+1+TimeCount] != '\n';TimeCount++)
                    {
                    }
                    char chTime[TimeCount+1]={0};
                    for(tmpCount=0;tmpCount<TimeCount;tmpCount++)
                    {
                        chTime[tmpCount] =  incallcommand[3+NameCount+1+phoneCount+1+tmpCount];
                    }
                    TimeString = chTime;
                    qDebug()<<"TimeString is"<<TimeString;

                    emit recordsShow(TypeString,NameString,PhoneString,TimeString);

                    memset(incallcommand,0,1024);
                }
                else if ( (incallcommand[0] =='P') &&(incallcommand[1] =='E'))
                {
                    qDebug()<<"send finishUpdateShow signal";

                    emit finishUpdateShow();

                    memset(incallcommand,0,1024);
                }
                else if ( (incallcommand[0] =='M') &&(incallcommand[1] =='X'))
                {
                    qDebug()<<"send MX signal";
                     //编号
                    char ch_count[2] = {0};
                    ch_count[0]  = incallcommand[2];
                    QString countString = ch_count;
                    int count = countString.toInt();

                    //地址
                    char bt_addr[13] = {0};
                    for (int i=0;i<12;i++)
                    {
                        bt_addr[i] = incallcommand[3+i];
                    }
                    QString BTDevAddrString;
                    BTDevAddrString = bt_addr;
                    qDebug()<<"BTDevAddrString is "<<BTDevAddrString;

                    //dev_name connect
                    char bt_dev_name[100]={0};
                    i = 0;
                    while(incallcommand[3+12+i] != '\n')
                    {
                        bt_dev_name[i] = incallcommand[3+12+i];
                        i++;
                    }

                    QString BTDevNameString;
                    BTDevNameString += bt_dev_name;
                    qDebug()<<"BTDevNameString is "<<BTDevNameString;

                    emit BT_Connect_INFO(count,BTDevAddrString,BTDevNameString);

                    memset(incallcommand,0,1024);
                }
                else if ( (incallcommand[0] =='S') &&(incallcommand[1] =='F'))
                {
                    qDebug()<<"send MX signal";

                    //地址
                    char bt_addr[13] = {0};
                    for (int i=0;i<12;i++)
                    {
                        bt_addr[i] = incallcommand[2+i];
                    }
                    QString BTDevAddrString;
                    BTDevAddrString = bt_addr;
                    qDebug()<<"BTDevAddrString is "<<BTDevAddrString;

                    //dev_name connect
                    char bt_dev_name[100]={0};
                    i = 0;
                    while(incallcommand[2+12+i] != '\n')
                    {
                        bt_dev_name[i] = incallcommand[2+12+i];
                        i++;
                    }

                    QString BTDevNameString;
                    BTDevNameString += bt_dev_name;
                    qDebug()<<"BTDevNameString is "<<BTDevNameString;

                    emit BT_Scan_INFO(BTDevAddrString,BTDevNameString);

                    memset(incallcommand,0,1024);
                }
                else if ( (incallcommand[0] =='I') &&(incallcommand[1] =='F'))
                {
                    qDebug()<<"send MX signal";

                    emit BT_Phone_pickDown();

                    memset(incallcommand,0,1024);
                }
                count = 0;
            }

            count = 0;
            memset(incallcommand,0,1024);
        }
        if (count >= 1024)
        {
            qDebug()<<"错误";
            count = 0;
            return ;
        }
        if ('\r' == *command) {
//            if (count > 0) {

//                //if ( (incallcommand[0] =='O') &&(incallcommand[1] =='K'))
//                {
//                    qDebug()<<"接收一条指令";
//                    memset(incallcommand,0,1024);
//                }
//                count = 0;
//            }
        }
        else
        {
            incallcommand[count] = *command;
            count++;
        }

        command++;
        i++;
    }
}

ReadCommand::~ReadCommand()
{

}
