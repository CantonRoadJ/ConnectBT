#ifndef CALL_H
#define CALL_H

#include <QWidget>
#include "calling.h"
#include "comingcall.h"
#include "public.h"
#include "readcommand.h"
#include "comingcall.h"
#include <QStandardItemModel>
#include <QModelIndex>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class CALL;
}

class CALL : public QWidget
{
    Q_OBJECT

public:
    explicit CALL(QWidget *parent = 0);
    ~CALL();
public :
    bool getFinishStatus();
    void setFinishStatus(bool status = false);

private slots:
    void OnComingcallShow(QString phoneNumber);
    void OnOuttingcallShow(QString phoneNumber);
    void OnContactsShow(QString NameString,QString phoneNumberString);
    void revicerFinishUpdateShow();
    void revicerRecordsShow(QString TypeString,QString NameString,QString PhoneString,QString TimeString);
    void revicerTableviewContactsClicked(const QModelIndex &index);
    void revicerBT_Connect_INFO(int row,QString BTDevAddrString,QString BTDevNameString);
    void revicerBT_Scan_INFO(QString BTDevAddrString,QString BTDevNameString);

    void on_pushButton_callphone_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_number1_clicked();

    void on_pushButton_number2_clicked();

    void on_pushButton_number3_clicked();

    void on_pushButton_number4_clicked();

    void on_pushButton_number5_clicked();

    void on_pushButton_number6_clicked();

    void on_pushButton_number7_clicked();

    void on_pushButton_number8_clicked();

    void on_pushButton_number9_clicked();

    void on_pushButton_star_clicked();

    void on_pushButton_number0_clicked();

    void on_pushButton_sign_clicked();

    void on_pushButton_open_or_close_clicked();

    void on_pushButton_play_or_stop_clicked();

    void on_pushButton_stop_clicked();

    void on_pushButton_vol_clicked();

    void on_pushButton_PreSong_clicked();

    void on_pushButton_nextSong_clicked();

    void on_pushButton_Contacts_callPhone_clicked();

    void on_pushButton_recordCall_clicked();

    void on_pushButton_disconnect_clicked();

    void on_listWidget_MF_device_clicked(const QModelIndex &index);

    void on_listWidget_SF_Dev_doubleClicked(const QModelIndex &index);

    void on_pushButton_page1_clicked();

    void on_pushButton_page2_clicked();

    void on_pushButton_page3_clicked();

    void on_pushButton_page4_clicked();

    void on_pushButton_page5_clicked();

    void on_pushButton_Contacts_update_clicked();

    void on_pushButton_connect_clicked();

private:
    Calling *callingWindow;
    ReadCommand * readCommandService;
    ComingCALL *InComingWindow;
    QStandardItemModel *Contacts_model;
    QStandardItemModel *Records_model;
    QModelIndex Contacts_index;
    QModelIndex connect_index;

    bool finishStatus;
    int setpStatus;
    QSqlDatabase db;
    int RecordsCount = 0;
    int ContactsCount = 0;

signals:
    void callPhoneNumber(QString phoneNumber);

private:
    Ui::CALL *ui;
};

#endif // CALL_H
