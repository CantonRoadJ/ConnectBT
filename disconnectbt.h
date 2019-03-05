#ifndef DISCONNECTBT_H
#define DISCONNECTBT_H

#include <QWidget>

namespace Ui {
class DisconnectBT;
}

class DisconnectBT : public QWidget
{
    Q_OBJECT

public:
    explicit DisconnectBT(QWidget *parent = 0);
    ~DisconnectBT();

private:
    Ui::DisconnectBT *ui;
};

#endif // DISCONNECTBT_H
