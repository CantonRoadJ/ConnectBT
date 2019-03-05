#ifndef COMINGCALL_H
#define COMINGCALL_H

#include <QWidget>
#include "calling.h"

namespace Ui {
class ComingCALL;
}

class ComingCALL : public QWidget
{
    Q_OBJECT

public:
    explicit ComingCALL(QWidget *parent = 0);
    ~ComingCALL();
    void setPhoneNumber(QString phoneNumber);

private slots:
    void on_pushButton_pickup_clicked();

    void on_pushButton_pickdown_clicked();

private:
    Ui::ComingCALL *ui;
    Calling *callingWindow;
};

#endif // COMINGCALL_H
