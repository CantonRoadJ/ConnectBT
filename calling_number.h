#ifndef CALLING_NUMBER_H
#define CALLING_NUMBER_H

#include <QWidget>

namespace Ui {
class Calling_number;
}

class Calling_number : public QWidget
{
    Q_OBJECT

public:
    explicit Calling_number(QWidget *parent = 0);
    ~Calling_number();

private slots:
    void on_pushButton2_keyboard_clicked();

    void on_pushButton2_number1_clicked();

    void on_pushButton2_number2_clicked();

    void on_pushButton2_number3_clicked();

    void on_pushButton2_number4_clicked();

    void on_pushButton2_number5_clicked();

    void on_pushButton2_number6_clicked();

    void on_pushButton2_number7_clicked();

    void on_pushButton2_number8_clicked();

    void on_pushButton2_number9_clicked();

    void on_pushButton2_star_clicked();

    void on_pushButton2_number0_clicked();

    void on_pushButton2_sign_clicked();

private:
    Ui::Calling_number *ui;
};

#endif // CALLING_NUMBER_H
