/********************************************************************************
** Form generated from reading UI file 'connectBT.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTBT_H
#define UI_CONNECTBT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(540, 280);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 540, 280));
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        buttonBox = new QDialogButtonBox(centralWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(330, 210, 171, 51));
        buttonBox->setStyleSheet(QStringLiteral(""));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">\350\223\235\347\211\231\351\205\215\345\257\271\350\257\267\346\261\202</span></p><p><span style=\" font-size:12pt;\">\350\256\276\345\244\207</span></p><p><span style=\" font-size:12pt; font-weight:600;\"><br/></span></p><p><span style=\" font-size:12pt;\">\351\205\215\345\257\271\347\240\201</span></p><p><span style=\" font-size:12pt; font-weight:600;\"><br/></span></p><p>\351\205\215\345\257\271\344\271\213\345\220\216\357\274\214\346\211\200\351\205\215\345\257\271\347\232\204\350\256\276\345\244\207\345\260\206\345\217\257\344\273\245\345\234\250\345\273\272\347\253\213\350\277\236\346\216\245\345\220\216\350\256\277\351\227\256\346\202\250\347\232\204\351\200\232\350\256\257\345\275\225\345\222\214\351\200\232\350\257\235\350\256\260\345\275\225\343\200\202</p><p><br/></p><p><br/></p><p><br/></p><p><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTBT_H
