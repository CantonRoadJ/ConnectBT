/********************************************************************************
** Form generated from reading UI file 'disconnectbt.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISCONNECTBT_H
#define UI_DISCONNECTBT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisconnectBT
{
public:
    QLabel *label_9;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *DisconnectBT)
    {
        if (DisconnectBT->objectName().isEmpty())
            DisconnectBT->setObjectName(QStringLiteral("DisconnectBT"));
        DisconnectBT->resize(290, 110);
        label_9 = new QLabel(DisconnectBT);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 290, 110));
        QFont font;
        font.setPointSize(9);
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        buttonBox = new QDialogButtonBox(DisconnectBT);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(110, 60, 156, 23));
        QFont font1;
        font1.setPointSize(12);
        buttonBox->setFont(font1);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(DisconnectBT);

        QMetaObject::connectSlotsByName(DisconnectBT);
    } // setupUi

    void retranslateUi(QWidget *DisconnectBT)
    {
        DisconnectBT->setWindowTitle(QApplication::translate("DisconnectBT", "Form", 0));
        label_9->setText(QApplication::translate("DisconnectBT", "<html><head/><body><p><span style=\" font-size:18pt;\">\346\230\257\345\220\246\347\241\256\350\256\244\346\226\255\345\274\200\346\255\244\350\277\236\346\216\245\357\274\237</span></p><p><br/></p><p><br/></p><p><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class DisconnectBT: public Ui_DisconnectBT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCONNECTBT_H
