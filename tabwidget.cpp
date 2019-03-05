#include "tabwidget.h"
#include "ui_tabwidget.h"
#include <QString>
#include <fcntl.h>
#include <unistd.h>
#include <QDebug>
#include <QMessageBox>
#include "comingcall.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QListWidgetItem>
#include <QVariant>

TabWidget::TabWidget(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::TabWidget)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("btContacts.db");                              // 设置数据库文件的文件名以及路径，路径可不设置
    if(!db.open())
    {
            qDebug("can not open btContacts.db file");
            exit(-1);
    }

    QSqlQuery sql_query;
    QString create_sql = "create table btContacts (id int primary key, name varchar(100), phone varchar(100))";
    sql_query.prepare(create_sql);
    if(!sql_query.exec())
    {
        qDebug() << "Error: Fail to create table." << sql_query.lastError();
    }
    else
    {
        qDebug() << "Table created!";
    }

    setpStatus = 0;

    //联系人表
    Contacts_model = new QStandardItemModel();
    Contacts_model->setHorizontalHeaderItem(0, new QStandardItem(QObject::tr("Name")));
    Contacts_model->setHorizontalHeaderItem(1, new QStandardItem(QObject::tr("phone.")));
    //利用setModel()方法将数据模型与QTableView绑定
    ui->tableView_Contacts->setModel(Contacts_model);
    ui->tableView_Contacts->setColumnWidth(0,100);
    ui->tableView_Contacts->setColumnWidth(1,200);

    connect(ui->tableView_Contacts, SIGNAL(pressed(const QModelIndex &)),this,SLOT(revicerTableviewContactsClicked(const QModelIndex &)));


    //通话记录表
    Records_model = new QStandardItemModel();
    Records_model->setHorizontalHeaderItem(0, new QStandardItem(QObject::tr("type")));
    Records_model->setHorizontalHeaderItem(1, new QStandardItem(QObject::tr("Name")));
    Records_model->setHorizontalHeaderItem(2, new QStandardItem(QObject::tr("phone.")));
    Records_model->setHorizontalHeaderItem(3, new QStandardItem(QObject::tr("time.")));
    //利用setModel()方法将数据模型与QTableView绑定
     ui->tableView_records->setModel(Records_model);
     ui->tableView_records->setColumnWidth(0,100);
     ui->tableView_records->setColumnWidth(1,100);
     ui->tableView_records->setColumnWidth(2,200);
     ui->tableView_records->setColumnWidth(3,200);

     connect(ui->tableView_records, SIGNAL(pressed(const QModelIndex &)),this,SLOT(revicerTableviewContactsClicked(const QModelIndex &)));

    //this->setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint |Qt::WindowFullscreenButtonHint);
    //this->showFullScreen();

    fd = ::open("/dev/BT_serial",O_RDWR);

    if (fd < 0)
    {
        qDebug("can not open the BT_serial");
        exit(-1);
    }

    readCommandService = new ReadCommand(this);

    readCommandService->start();

    //
    connect(readCommandService,SIGNAL(comingcallShow(QString)),this,SLOT(OnComingcallShow(QString)));
    //
    connect(readCommandService,SIGNAL(outtingcallShow(QString)),this,SLOT(OnOuttingcallShow(QString)));
    //
    connect(readCommandService,SIGNAL(contactsShow(QString,QString)),this,SLOT(OnContactsShow(QString,QString)));
    //
    connect(readCommandService,SIGNAL(finishUpdateShow()),this,SLOT(revicerFinishUpdateShow()));
    //
    connect(readCommandService,SIGNAL(recordsShow(QString,QString,QString,QString)),this,SLOT(revicerRecordsShow(QString,QString,QString,QString)));
    //
    connect(readCommandService,SIGNAL(BT_Connect_INFO(int,QString,QString)),this,SLOT(revicerBT_Connect_INFO(int,QString,QString)));

    connect(readCommandService,SIGNAL(BT_Scan_INFO(QString,QString)),this,SLOT(revicerBT_Scan_INFO(QString,QString)));

    QString phoneNumberString ="";
    ui->label_phoneNumber->setText(phoneNumberString);
    ui->verticalSlider_vol->hide();

    char tmp[100] = {0};

    strcpy(tmp,"AT#CC");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));

    //
    setFinishStatus(false);

    strcpy(tmp,"AT#PA");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));

}

TabWidget::~TabWidget()
{
    if (fd > 0)
    {
        ::close(fd);
    }

    QSqlQuery sql_query;
    QString select_phoneNumber_sql = "DELETE FROM btContacts";
    if (!sql_query.exec(select_phoneNumber_sql))
    {
        qDebug()<<sql_query.lastError();
    }

    db.close();

    delete ui;
}

void TabWidget::on_pushButton_callphone_clicked()
{

    QString name="";
    QSqlQuery sql_query;
    QString select_phoneNumber_sql = "select * from btContacts WHERE phone='";
    select_phoneNumber_sql += ui->label_phoneNumber->text();
    select_phoneNumber_sql += "'";

    qDebug()<<select_phoneNumber_sql;

    sql_query.prepare(select_phoneNumber_sql);
    if (!sql_query.exec())
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            int id = sql_query.value(0).toInt();
            name = sql_query.value(1).toString();
            qDebug() <<"name  = " << name;
            //qDebug()<<QString("id:%1    name:%2").arg(id).arg(name);
        }
    }



//    callingWindow = new Calling();
//    callingWindow->show();

//    if (name =="")
//        callingWindow->setPhoneNumber(ui->label_phoneNumber->text());
//    else
//        callingWindow->setPhoneNumber(name);

    char tmp[100] = {0};
#if 1
    strcpy(tmp,"AT#CW");
    strcat(tmp,ui->label_phoneNumber->text().toLatin1().data());
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
#endif
    //emit callPhoneNumber(ui->label_phoneNumber->text());
}

void TabWidget::on_pushButton_delete_clicked()
{
    QString phoneNumberString ="";
    phoneNumberString = ui->label_phoneNumber->text();
    phoneNumberString.chop(1);
    ui->label_phoneNumber->setText(phoneNumberString);
}

void TabWidget::on_pushButton_number1_clicked()
{
    QString phoneNumberString ="";
    phoneNumberString = ui->label_phoneNumber->text();
    if (phoneNumberString.length() < 20)
    {
        phoneNumberString += "1";
    }
    ui->label_phoneNumber->setText(phoneNumberString);
}

void TabWidget::on_pushButton_number2_clicked()
{
    QString phoneNumberString ="";
    phoneNumberString = ui->label_phoneNumber->text();
    if (phoneNumberString.length() < 20)
    {
        phoneNumberString += "2";
    }
    ui->label_phoneNumber->setText(phoneNumberString);
}

void TabWidget::on_pushButton_number3_clicked()
{
    QString phoneNumberString ="";
    phoneNumberString = ui->label_phoneNumber->text();
    if (phoneNumberString.length() < 20)
    {
        phoneNumberString += "3";
    }
    ui->label_phoneNumber->setText(phoneNumberString);
}

void TabWidget::on_pushButton_number4_clicked()
{
    QString phoneNumberString ="";
    phoneNumberString = ui->label_phoneNumber->text();
    if (phoneNumberString.length() < 20)
    {
        phoneNumberString += "4";
    }
    ui->label_phoneNumber->setText(phoneNumberString);
}

void TabWidget::on_pushButton_number5_clicked()
{
    QString phoneNumberString ="";
    phoneNumberString = ui->label_phoneNumber->text();
    if (phoneNumberString.length() < 20)
    {
        phoneNumberString += "5";
    }
    ui->label_phoneNumber->setText(phoneNumberString);
}

void TabWidget::on_pushButton_number6_clicked()
{
    QString phoneNumberString ="";
    phoneNumberString = ui->label_phoneNumber->text();
    if (phoneNumberString.length() < 20)
    {
        phoneNumberString += "6";
    }
    ui->label_phoneNumber->setText(phoneNumberString);
}

void TabWidget::on_pushButton_number7_clicked()
{
    QString phoneNumberString ="";
    phoneNumberString = ui->label_phoneNumber->text();
    if (phoneNumberString.length() < 20)
    {
        phoneNumberString += "7";
    }
    ui->label_phoneNumber->setText(phoneNumberString);
}

void TabWidget::on_pushButton_number8_clicked()
{
    QString phoneNumberString ="";
    phoneNumberString = ui->label_phoneNumber->text();
    if (phoneNumberString.length() < 20)
    {
        phoneNumberString += "8";
    }
    ui->label_phoneNumber->setText(phoneNumberString);
}

void TabWidget::on_pushButton_number9_clicked()
{
    QString phoneNumberString ="";
    phoneNumberString = ui->label_phoneNumber->text();
    if (phoneNumberString.length() < 20)
    {
        phoneNumberString += "9";
    }
    ui->label_phoneNumber->setText(phoneNumberString);
}

void TabWidget::on_pushButton_star_clicked()
{
    QString phoneNumberString ="";
    phoneNumberString = ui->label_phoneNumber->text();
    if (phoneNumberString.length() < 20)
    {
        phoneNumberString += "*";
    }
    ui->label_phoneNumber->setText(phoneNumberString);
}

void TabWidget::on_pushButton_number0_clicked()
{
    QString phoneNumberString ="";
    phoneNumberString = ui->label_phoneNumber->text();
    if (phoneNumberString.length() < 20)
    {
        phoneNumberString += "0";
    }
    ui->label_phoneNumber->setText(phoneNumberString);
}

void TabWidget::on_pushButton_sign_clicked()
{
    QString phoneNumberString ="";
    phoneNumberString = ui->label_phoneNumber->text();
    if (phoneNumberString.length() < 20)
    {
        phoneNumberString += "#";
    }
    ui->label_phoneNumber->setText(phoneNumberString);
}

void TabWidget::on_pushButton_open_or_close_clicked()
{
    static bool isOpen = false;

    isOpen = !isOpen;

    if (isOpen ==false)
    {
        ui->pushButton_open_or_close->setText(tr("关"));

        char tmp[100] = {0};

        strcpy(tmp,"AT#P0");
        strcat(tmp,"\r\n");

        ::write(fd,tmp,strlen(tmp));        

        //停止搜索设备
        strcpy(tmp,"AT#SD");
        strcat(tmp,"\r\n");

        ::write(fd,tmp,strlen(tmp));

        ui->listWidget_SF_Dev->clear();
    }
    else
    {
        ui->pushButton_open_or_close->setText(tr("开"));

        char tmp[100] = {0};

        strcpy(tmp,"AT#P1");
        strcat(tmp,"\r\n");

        ::write(fd,tmp,strlen(tmp));

        sleep(1);

        //搜索设备
        strcpy(tmp,"AT#SD");
        strcat(tmp,"\r\n");

        ::write(fd,tmp,strlen(tmp));
    }
}

void TabWidget::on_pushButton_play_or_stop_clicked()
{
    static bool isPlay = false;

    isPlay = !isPlay;

    if (isPlay)
    {
        ui->pushButton_play_or_stop->setText("播放");

        char tmp[100] = {0};

        strcpy(tmp,"AT#MA");
        strcat(tmp,"\r\n");

        ::write(fd,tmp,strlen(tmp));

        strcpy(tmp,"AT#VB");
        strcat(tmp,"\r\n");

        ::write(fd,tmp,strlen(tmp));
    }
    else
    {
        ui->pushButton_play_or_stop->setText("暂停");

        char tmp[100] = {0};

        strcpy(tmp,"AT#MA");
        strcat(tmp,"\r\n");

        ::write(fd,tmp,strlen(tmp));

        strcpy(tmp,"AT#VB");
        strcat(tmp,"\r\n");

        ::write(fd,tmp,strlen(tmp));
    }
}

void TabWidget::on_pushButton_stop_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#MC");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void TabWidget::on_pushButton_vol_clicked()
{
    static bool isSetVol = false;

    isSetVol = !isSetVol;

    if (isSetVol)
    {
        ui->verticalSlider_vol->show();
    }
    else
    {
        ui->verticalSlider_vol->hide();
    }
}

void TabWidget::on_pushButton_PreSong_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#ME");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));

    strcpy(tmp,"AT#VB");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}

void TabWidget::on_pushButton_nextSong_clicked()
{
    char tmp[100] = {0};

    strcpy(tmp,"AT#MD");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));

    strcpy(tmp,"AT#VB");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));
}


void TabWidget::OnComingcallShow(QString phoneNumber)
{
    qDebug()<<"yes, here is receive the signal comingcallShow";
    //this->hide();

    QString name="";
    QSqlQuery sql_query;
    QString select_phoneNumber_sql = "select * from btContacts WHERE phone='";
    select_phoneNumber_sql += phoneNumber;
    select_phoneNumber_sql += "'";

    qDebug()<<select_phoneNumber_sql;

    sql_query.prepare(select_phoneNumber_sql);
    if (!sql_query.exec())
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            int id = sql_query.value(0).toInt();
            name = sql_query.value(1).toString();
            qDebug() <<"name  = " << name;
            //qDebug()<<QString("id:%1    name:%2").arg(id).arg(name);
        }
    }

    if (name == "")
    {
        InComingWindow = new ComingCALL();
        InComingWindow->setPhoneNumber(phoneNumber);
        InComingWindow->show();
    }
    else
    {
        InComingWindow = new ComingCALL();
        InComingWindow->setPhoneNumber(name);
        InComingWindow->show();
    }
}

void TabWidget::OnOuttingcallShow(QString phoneNumber)
{
    qDebug()<<"yes, here is receive the signal outtingcallShow is " << phoneNumber;

    QString name="";
    QSqlQuery sql_query;
    QString select_phoneNumber_sql = "select * from btContacts WHERE phone='";
    select_phoneNumber_sql += phoneNumber;
    select_phoneNumber_sql += "'";

    qDebug()<<select_phoneNumber_sql;

    sql_query.prepare(select_phoneNumber_sql);
    if (!sql_query.exec())
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            int id = sql_query.value(0).toInt();
            name = sql_query.value(1).toString();
            qDebug() <<"name  = " << name;
            //qDebug()<<QString("id:%1    name:%2").arg(id).arg(name);
        }
    }

    if (name == "")
    {
        callingWindow = new Calling();
        callingWindow->setPhoneNumber(phoneNumber);
        callingWindow->show();
    }
    else
    {
        callingWindow = new Calling();
        callingWindow->setPhoneNumber(name);
        callingWindow->show();
    }
}


void TabWidget::OnContactsShow(QString NameString,QString phoneNumberString)
{
    static int ContactsCount = 0;
    qDebug()<<"yes, here is receive the signal contactsShow is "<<NameString<<phoneNumberString;
    Contacts_model->setItem(ContactsCount, 0, new QStandardItem(NameString));
    Contacts_model->setItem(ContactsCount, 1, new QStandardItem(phoneNumberString));


    QSqlQuery sql_query;
    QString insert_sql = "insert into btContacts values (?, ?, ?)";
    sql_query.prepare(insert_sql);
    sql_query.addBindValue(ContactsCount);
    sql_query.addBindValue(NameString);
    sql_query.addBindValue(phoneNumberString);
    if(!sql_query.exec())
    {
        qDebug() << sql_query.lastError();
    }
    else
    {
        qDebug() << "inserted"<<NameString<< phoneNumberString;
    }

    ContactsCount++;
}

void TabWidget::revicerFinishUpdateShow()
{
    qDebug()<<"yes, here is receive the signal finishUpdateShow is ";

    setFinishStatus(true);
    setpStatus++;

    char tmp[100] = {0};

    switch (setpStatus) {

    case 1:
        strcpy(tmp,"AT#PH");
        strcat(tmp,"\r\n");

        ::write(fd,tmp,strlen(tmp));
        break;

    case 2:

        strcpy(tmp,"AT#PI");
        strcat(tmp,"\r\n");

        ::write(fd,tmp,strlen(tmp));
        break;
    case 3:

        strcpy(tmp,"AT#PJ");
        strcat(tmp,"\r\n");

        ::write(fd,tmp,strlen(tmp));
        break;

    default:

        break;
    }
}

bool TabWidget::getFinishStatus()
{
    return finishStatus;
}

void TabWidget::setFinishStatus(bool status)
{
    finishStatus = status;
}

void TabWidget::revicerRecordsShow(QString TypeString,QString NameString,QString PhoneString,QString TimeString)
{
    static int RecordsCount = 0;
    Records_model->setItem(RecordsCount, 0, new QStandardItem(TypeString));
    Records_model->setItem(RecordsCount, 1, new QStandardItem(NameString));
    Records_model->setItem(RecordsCount, 2, new QStandardItem(PhoneString));
    Records_model->setItem(RecordsCount, 3, new QStandardItem(TimeString));
    RecordsCount++;
}

void TabWidget::on_pushButton_Contacts_callPhone_clicked()
{
    Contacts_index = Contacts_index.sibling(Contacts_index.row(),1);
    qDebug()<<"phone is "<<Contacts_index.data().toString();
    QString callString  = "AT#CW";
    callString += Contacts_index.data().toString();
    callString += "\r\n";

    char tmp[100] = {0};
    strcpy(tmp,callString.toLatin1().data());

    qDebug()<<tmp;

    ::write(fd,tmp,strlen(tmp));
}

void TabWidget::revicerTableviewContactsClicked(const QModelIndex &index)
{
    qDebug()<<"OnTableview_ContactsClicked";
    Contacts_index = index;
}

void TabWidget::on_pushButton_recordCall_clicked()
{
    Contacts_index = Contacts_index.sibling(Contacts_index.row(),2);
    qDebug()<<"phone is "<<Contacts_index.data().toString();
    QString callString  = "AT#CW";
    callString += Contacts_index.data().toString();
    callString += "\r\n";

    char tmp[100] = {0};
    strcpy(tmp,callString.toLatin1().data());

    qDebug()<<tmp;

    ::write(fd,tmp,strlen(tmp));
}

void TabWidget::on_pushButton_disconnect_clicked()
{
    char tmp[100] = {0};

    QString tmpNumber;
    tmpNumber.setNum(connect_index.row(),10);

    strcpy(tmp,"AT#CD");
    //strcpy(tmp,tmpNumber.toLatin1().data());
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));

    strcpy(tmp,"AT#CV");
    strcat(tmp,tmpNumber.toLatin1().data());
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));

    ui->listWidget_MF_device->clear();

    sleep(1);

    strcpy(tmp,"AT#MX");
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));


    //ui->listWidget_MF_device->item(connect_index.row())->setHidden(true);
}

void TabWidget::revicerBT_Scan_INFO(QString BTDevAddrString,QString BTDevNameString)
{
    bool check = false;

    for(int i=0;i<ui->listWidget_SF_Dev->count();i++)
    {
        if ( ui->listWidget_SF_Dev->item(i)->text() == (BTDevAddrString+BTDevNameString) )
            check =true;
    }

    for(int i=0;i<ui->listWidget_MF_device->count();i++)
    {
        if ( ui->listWidget_MF_device->item(i)->text() == (BTDevAddrString+BTDevNameString) )
            check =true;
    }

    if (check == false)
    {
        ui->listWidget_SF_Dev->addItem(BTDevAddrString+BTDevNameString);
    }
}

void TabWidget::revicerBT_Connect_INFO(int row,QString BTDevAddrString,QString BTDevNameString)
{

    bool check = false;

    for(int i=0;i<ui->listWidget_MF_device->count();i++)
    {
        if ( ui->listWidget_MF_device->item(i)->text() == (BTDevAddrString+BTDevNameString) )
            check =true;
    }

    if (check == false)
    {
        ui->listWidget_MF_device->insertItem(row,BTDevAddrString+BTDevNameString);
    }

    for(int i=0;i<ui->listWidget_SF_Dev->count();i++)
    {
        if ( ui->listWidget_SF_Dev->item(i)->text() == (BTDevAddrString+BTDevNameString) )
            ui->listWidget_SF_Dev->item(i)->setHidden(true);
    }
}

void TabWidget::on_listWidget_MF_device_clicked(const QModelIndex &index)
{
    qDebug()<<"index.row() is " <<index.row();
    connect_index = index;
}

void TabWidget::on_listWidget_SF_Dev_doubleClicked(const QModelIndex &index)
{
    QString bt_addr = index.data().toString().left(12);

    qDebug()<<"bt_addr is"<<bt_addr;

    char tmp[100] = {0};

//    strcpy(tmp,"AT#DB");
//    strcat(tmp,bt_addr.toLatin1().data());
//    strcat(tmp,"\r\n");

//    ::write(fd,tmp,strlen(tmp));

    strcpy(tmp,"AT#CC");
    strcat(tmp,bt_addr.toLatin1().data());
    strcat(tmp,"\r\n");

    ::write(fd,tmp,strlen(tmp));

//    strcpy(tmp,"AT#MX");
//    //strcat(tmp,bt_addr.toLatin1().data());
//    strcat(tmp,"\r\n");

//    ::write(fd,tmp,strlen(tmp));
}
