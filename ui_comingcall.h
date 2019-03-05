/********************************************************************************
** Form generated from reading UI file 'comingcall.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMINGCALL_H
#define UI_COMINGCALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComingCALL
{
public:
    QLabel *label_phonemumber;
    QLabel *label;
    QPushButton *pushButton_pickup;
    QPushButton *pushButton_pickdown;

    void setupUi(QWidget *ComingCALL)
    {
        if (ComingCALL->objectName().isEmpty())
            ComingCALL->setObjectName(QStringLiteral("ComingCALL"));
        ComingCALL->resize(520, 230);
        label_phonemumber = new QLabel(ComingCALL);
        label_phonemumber->setObjectName(QStringLiteral("label_phonemumber"));
        label_phonemumber->setGeometry(QRect(160, 0, 360, 230));
        label_phonemumber->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:1 rgba(59, 59, 59, 145));\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(ComingCALL);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 160, 230));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/\345\244\264\345\203\217.png);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:1 rgba(59, 59, 59, 145));"));
        pushButton_pickup = new QPushButton(ComingCALL);
        pushButton_pickup->setObjectName(QStringLiteral("pushButton_pickup"));
        pushButton_pickup->setGeometry(QRect(284, 160, 101, 51));
        pushButton_pickup->setFocusPolicy(Qt::NoFocus);
        pushButton_pickup->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/\346\216\245\345\220\254.png);\n"
"border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0));"));
        pushButton_pickdown = new QPushButton(ComingCALL);
        pushButton_pickdown->setObjectName(QStringLiteral("pushButton_pickdown"));
        pushButton_pickdown->setGeometry(QRect(400, 160, 101, 51));
        pushButton_pickdown->setFocusPolicy(Qt::NoFocus);
        pushButton_pickdown->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0));\n"
"image: url(:/new/prefix1/image/\346\214\202\346\226\255.png);"));

        retranslateUi(ComingCALL);

        QMetaObject::connectSlotsByName(ComingCALL);
    } // setupUi

    void retranslateUi(QWidget *ComingCALL)
    {
        ComingCALL->setWindowTitle(QApplication::translate("ComingCALL", "Form", 0));
        label_phonemumber->setText(QApplication::translate("ComingCALL", "<html><head/><body><p><br/></p><p><span style=\" font-size:28pt; font-weight:600;\">\346\235\245\347\224\265</span></p><p><span style=\" font-size:28pt; font-weight:600;\">123 4567 8901</span></p><p><span style=\" font-size:28pt; font-weight:600;\"><br/></span></p><p><span style=\" font-size:28pt; font-weight:600;\"><br/><br/></span></p></body></html>", 0));
        label->setText(QString());
        pushButton_pickup->setText(QString());
        pushButton_pickdown->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ComingCALL: public Ui_ComingCALL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMINGCALL_H
