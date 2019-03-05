/********************************************************************************
** Form generated from reading UI file 'calling.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLING_H
#define UI_CALLING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calling
{
public:
    QLabel *label_phoneNumber;
    QLabel *label_2;
    QPushButton *pushButton_closeConnect;
    QPushButton *pushButton_Connect;
    QPushButton *pushButton_keyboard;

    void setupUi(QWidget *Calling)
    {
        if (Calling->objectName().isEmpty())
            Calling->setObjectName(QStringLiteral("Calling"));
        Calling->resize(1280, 720);
        Calling->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_phoneNumber = new QLabel(Calling);
        label_phoneNumber->setObjectName(QStringLiteral("label_phoneNumber"));
        label_phoneNumber->setGeometry(QRect(370, 90, 540, 90));
        QFont font;
        font.setPointSize(50);
        font.setBold(true);
        font.setWeight(75);
        label_phoneNumber->setFont(font);
        label_phoneNumber->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(Calling);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(530, 200, 220, 60));
        QFont font1;
        font1.setFamily(QStringLiteral("ADMUI3Lg"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("font: 16pt \"ADMUI3Lg\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_closeConnect = new QPushButton(Calling);
        pushButton_closeConnect->setObjectName(QStringLiteral("pushButton_closeConnect"));
        pushButton_closeConnect->setGeometry(QRect(360, 540, 90, 90));
        pushButton_closeConnect->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.170455 rgba(0, 0, 0, 255), stop:1 rgba(121, 121, 121, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_Connect = new QPushButton(Calling);
        pushButton_Connect->setObjectName(QStringLiteral("pushButton_Connect"));
        pushButton_Connect->setGeometry(QRect(830, 540, 90, 90));
        pushButton_Connect->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.170455 rgba(0, 0, 0, 255), stop:1 rgba(121, 121, 121, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_keyboard = new QPushButton(Calling);
        pushButton_keyboard->setObjectName(QStringLiteral("pushButton_keyboard"));
        pushButton_keyboard->setGeometry(QRect(595, 540, 90, 90));
        pushButton_keyboard->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.170455 rgba(0, 0, 0, 255), stop:1 rgba(121, 121, 121, 255));\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(Calling);

        QMetaObject::connectSlotsByName(Calling);
    } // setupUi

    void retranslateUi(QWidget *Calling)
    {
        Calling->setWindowTitle(QApplication::translate("Calling", "Form", 0));
        label_phoneNumber->setText(QApplication::translate("Calling", "<html><head/><body><p align=\"center\">123 4567 8901</p></body></html>", 0));
        label_2->setText(QApplication::translate("Calling", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">\344\270\255\345\233\275\347\224\265\344\277\241 01:10</span></p></body></html>", 0));
        pushButton_closeConnect->setText(QApplication::translate("Calling", "\346\214\202\346\226\255", 0));
        pushButton_Connect->setText(QApplication::translate("Calling", "\350\275\246\350\275\275/\346\211\213\346\234\272 \346\216\245\345\220\254", 0));
        pushButton_keyboard->setText(QApplication::translate("Calling", "\351\224\256\347\233\230", 0));
    } // retranslateUi

};

namespace Ui {
    class Calling: public Ui_Calling {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLING_H
