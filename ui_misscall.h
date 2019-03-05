/********************************************************************************
** Form generated from reading UI file 'misscall.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISSCALL_H
#define UI_MISSCALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MissCALL
{
public:
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *MissCALL)
    {
        if (MissCALL->objectName().isEmpty())
            MissCALL->setObjectName(QStringLiteral("MissCALL"));
        MissCALL->resize(420, 160);
        label_3 = new QLabel(MissCALL);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 420, 160));
        label_3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:1 rgba(59, 59, 59, 145));\n"
"color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(MissCALL);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 100, 101, 51));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/\346\216\245\345\220\254.png);\n"
"border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0));"));
        pushButton_3 = new QPushButton(MissCALL);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 100, 101, 51));
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0));\n"
"image: url(:/new/prefix1/image/\346\214\202\346\226\255.png);"));

        retranslateUi(MissCALL);

        QMetaObject::connectSlotsByName(MissCALL);
    } // setupUi

    void retranslateUi(QWidget *MissCALL)
    {
        MissCALL->setWindowTitle(QApplication::translate("MissCALL", "Form", 0));
        label_3->setText(QApplication::translate("MissCALL", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600;\">\346\234\252\346\216\245\346\235\245\347\224\265</span></p><p><span style=\" font-size:22pt; font-weight:600;\">123 4567 8901</span></p><p><br/></p></body></html>", 0));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MissCALL: public Ui_MissCALL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISSCALL_H
