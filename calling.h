#ifndef CALLING_H
#define CALLING_H

#include <QWidget>
#include "calling_number.h"

namespace Ui {
class Calling;
}

class Calling : public QWidget
{
    Q_OBJECT

public:
    explicit Calling(QWidget *parent = 0);
    ~Calling();

public slots:
     void setPhoneNumber(QString phoneNumber);

private slots:

    void on_pushButton_closeConnect_clicked();

    void on_pushButton_Connect_clicked();

    void on_pushButton_keyboard_clicked();

private:
    Ui::Calling *ui;
    Calling_number  * number_keybroad;
};

#endif // CALLING_H
