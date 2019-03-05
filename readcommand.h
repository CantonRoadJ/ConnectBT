#ifndef READCOMMAND_H
#define READCOMMAND_H

#include<iostream>
#include<string>
#include<QThread>
#include<QObject>

class ReadCommand : public QThread
{
    Q_OBJECT

public:
    ReadCommand(QObject *parent = Q_NULLPTR);
    ~ReadCommand();

signals:
    void comingcallShow(QString);
    void outtingcallShow(QString);
    void contactsShow(QString,QString);
    void finishUpdateShow();
    void recordsShow(QString,QString,QString,QString);
    void BT_Connect_INFO(int,QString,QString);
    void BT_Scan_INFO(QString,QString);
    void BT_Phone_pickDown();

private:
    void run();
    void ReadBTCommand();
    void ScanfCommand(char * command);
};



#endif // READCOMMAND_H
