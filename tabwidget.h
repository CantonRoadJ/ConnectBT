#ifndef TABWIDGET_H
#define TABWIDGET_H

#include <QTabWidget>
#include "calling.h"
#include "public.h"
#include "readcommand.h"
#include "comingcall.h"
#include <QStandardItemModel>
#include <QModelIndex>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class TabWidget;
}

class TabWidget : public QTabWidget
{
    Q_OBJECT

public:
    explicit TabWidget(QWidget *parent = 0);
    ~TabWidget();

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

private:
    Ui::TabWidget *ui;
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

signals:
    void callPhoneNumber(QString phoneNumber);

};

#endif // TABWIDGET_H
