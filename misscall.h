#ifndef MISSCALL_H
#define MISSCALL_H

#include <QWidget>

namespace Ui {
class MissCALL;
}

class MissCALL : public QWidget
{
    Q_OBJECT

public:
    explicit MissCALL(QWidget *parent = 0);
    ~MissCALL();

private:
    Ui::MissCALL *ui;
};

#endif // MISSCALL_H
