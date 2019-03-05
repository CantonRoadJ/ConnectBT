/********************************************************************************
** Form generated from reading UI file 'call.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALL_H
#define UI_CALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CALL
{
public:
    QPushButton *pushButton_page1;
    QPushButton *pushButton_page4;
    QPushButton *pushButton_page3;
    QPushButton *pushButton_page2;
    QPushButton *pushButton_page5;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QPushButton *pushButton_number1;
    QPushButton *pushButton_sign;
    QPushButton *pushButton_number8;
    QPushButton *pushButton_callphone;
    QPushButton *pushButton_number2;
    QPushButton *pushButton_number5;
    QPushButton *pushButton_star;
    QPushButton *pushButton_number9;
    QPushButton *pushButton_number4;
    QPushButton *pushButton_number3;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_number7;
    QLabel *label_phoneNumber;
    QPushButton *pushButton_number0;
    QPushButton *pushButton_number6;
    QWidget *page_2;
    QTableView *tableView_Contacts;
    QPushButton *pushButton_Contacts_callPhone;
    QPushButton *pushButton_Contacts_update;
    QWidget *page_3;
    QPushButton *pushButton_recordCall;
    QTableView *tableView_records;
    QWidget *page_4;
    QPushButton *pushButton_PreSong;
    QPushButton *pushButton_play_or_stop;
    QPushButton *pushButton_vol;
    QSlider *verticalSlider_vol;
    QPushButton *pushButton_nextSong;
    QWidget *page_5;
    QLabel *label_2;
    QPushButton *pushButton_open_or_close;
    QPushButton *pushButton_disconnect;
    QFrame *line_2;
    QLabel *label_3;
    QLabel *label_7;
    QListWidget *listWidget_MF_device;
    QListWidget *listWidget_SF_Dev;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_connect;

    void setupUi(QWidget *CALL)
    {
        if (CALL->objectName().isEmpty())
            CALL->setObjectName(QStringLiteral("CALL"));
        CALL->resize(1280, 720);
        pushButton_page1 = new QPushButton(CALL);
        pushButton_page1->setObjectName(QStringLiteral("pushButton_page1"));
        pushButton_page1->setGeometry(QRect(0, 60, 250, 120));
        QFont font;
        font.setPointSize(28);
        pushButton_page1->setFont(font);
        pushButton_page1->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 0, 0, 255));"));
        pushButton_page4 = new QPushButton(CALL);
        pushButton_page4->setObjectName(QStringLiteral("pushButton_page4"));
        pushButton_page4->setGeometry(QRect(0, 420, 250, 120));
        pushButton_page4->setFont(font);
        pushButton_page3 = new QPushButton(CALL);
        pushButton_page3->setObjectName(QStringLiteral("pushButton_page3"));
        pushButton_page3->setGeometry(QRect(0, 300, 250, 120));
        pushButton_page3->setFont(font);
        pushButton_page2 = new QPushButton(CALL);
        pushButton_page2->setObjectName(QStringLiteral("pushButton_page2"));
        pushButton_page2->setGeometry(QRect(0, 180, 250, 120));
        pushButton_page2->setFont(font);
        pushButton_page5 = new QPushButton(CALL);
        pushButton_page5->setObjectName(QStringLiteral("pushButton_page5"));
        pushButton_page5->setGeometry(QRect(0, 540, 250, 120));
        pushButton_page5->setFont(font);
        stackedWidget = new QStackedWidget(CALL);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(260, 20, 1030, 700));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        pushButton_number1 = new QPushButton(page_1);
        pushButton_number1->setObjectName(QStringLiteral("pushButton_number1"));
        pushButton_number1->setGeometry(QRect(10, 170, 180, 90));
        pushButton_number1->setFont(font);
        pushButton_number1->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_sign = new QPushButton(page_1);
        pushButton_sign->setObjectName(QStringLiteral("pushButton_sign"));
        pushButton_sign->setGeometry(QRect(460, 530, 180, 90));
        pushButton_sign->setFont(font);
        pushButton_sign->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_number8 = new QPushButton(page_1);
        pushButton_number8->setObjectName(QStringLiteral("pushButton_number8"));
        pushButton_number8->setGeometry(QRect(235, 410, 180, 90));
        pushButton_number8->setFont(font);
        pushButton_number8->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_callphone = new QPushButton(page_1);
        pushButton_callphone->setObjectName(QStringLiteral("pushButton_callphone"));
        pushButton_callphone->setGeometry(QRect(750, 265, 150, 150));
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_callphone->setFont(font1);
        pushButton_callphone->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.170455 rgba(0, 0, 0, 255), stop:1 rgba(121, 121, 121, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_number2 = new QPushButton(page_1);
        pushButton_number2->setObjectName(QStringLiteral("pushButton_number2"));
        pushButton_number2->setGeometry(QRect(235, 170, 180, 90));
        pushButton_number2->setFont(font);
        pushButton_number2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_number5 = new QPushButton(page_1);
        pushButton_number5->setObjectName(QStringLiteral("pushButton_number5"));
        pushButton_number5->setGeometry(QRect(235, 290, 180, 90));
        pushButton_number5->setFont(font);
        pushButton_number5->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_star = new QPushButton(page_1);
        pushButton_star->setObjectName(QStringLiteral("pushButton_star"));
        pushButton_star->setGeometry(QRect(10, 530, 180, 90));
        pushButton_star->setFont(font);
        pushButton_star->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_number9 = new QPushButton(page_1);
        pushButton_number9->setObjectName(QStringLiteral("pushButton_number9"));
        pushButton_number9->setGeometry(QRect(460, 410, 180, 90));
        pushButton_number9->setFont(font);
        pushButton_number9->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_number4 = new QPushButton(page_1);
        pushButton_number4->setObjectName(QStringLiteral("pushButton_number4"));
        pushButton_number4->setGeometry(QRect(10, 290, 180, 90));
        pushButton_number4->setFont(font);
        pushButton_number4->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_number3 = new QPushButton(page_1);
        pushButton_number3->setObjectName(QStringLiteral("pushButton_number3"));
        pushButton_number3->setGeometry(QRect(460, 170, 180, 90));
        pushButton_number3->setFont(font);
        pushButton_number3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_delete = new QPushButton(page_1);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(550, 40, 90, 90));
        pushButton_delete->setFont(font1);
        pushButton_delete->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.170455 rgba(0, 0, 0, 255), stop:1 rgba(121, 121, 121, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_number7 = new QPushButton(page_1);
        pushButton_number7->setObjectName(QStringLiteral("pushButton_number7"));
        pushButton_number7->setGeometry(QRect(10, 410, 180, 90));
        pushButton_number7->setFont(font);
        pushButton_number7->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        label_phoneNumber = new QLabel(page_1);
        label_phoneNumber->setObjectName(QStringLiteral("label_phoneNumber"));
        label_phoneNumber->setGeometry(QRect(10, 40, 540, 90));
        QFont font2;
        font2.setPointSize(58);
        font2.setBold(true);
        font2.setWeight(75);
        label_phoneNumber->setFont(font2);
        label_phoneNumber->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(184, 184, 184, 255));"));
        pushButton_number0 = new QPushButton(page_1);
        pushButton_number0->setObjectName(QStringLiteral("pushButton_number0"));
        pushButton_number0->setGeometry(QRect(235, 530, 180, 90));
        pushButton_number0->setFont(font);
        pushButton_number0->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_number6 = new QPushButton(page_1);
        pushButton_number6->setObjectName(QStringLiteral("pushButton_number6"));
        pushButton_number6->setGeometry(QRect(460, 290, 180, 90));
        pushButton_number6->setFont(font);
        pushButton_number6->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        tableView_Contacts = new QTableView(page_2);
        tableView_Contacts->setObjectName(QStringLiteral("tableView_Contacts"));
        tableView_Contacts->setGeometry(QRect(100, 40, 630, 580));
        pushButton_Contacts_callPhone = new QPushButton(page_2);
        pushButton_Contacts_callPhone->setObjectName(QStringLiteral("pushButton_Contacts_callPhone"));
        pushButton_Contacts_callPhone->setGeometry(QRect(840, 380, 150, 150));
        pushButton_Contacts_callPhone->setFont(font1);
        pushButton_Contacts_callPhone->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.170455 rgba(0, 0, 0, 255), stop:1 rgba(121, 121, 121, 255));\n"
"color: rgb(255, 255, 255);"));
        pushButton_Contacts_update = new QPushButton(page_2);
        pushButton_Contacts_update->setObjectName(QStringLiteral("pushButton_Contacts_update"));
        pushButton_Contacts_update->setGeometry(QRect(840, 130, 150, 150));
        QFont font3;
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_Contacts_update->setFont(font3);
        pushButton_Contacts_update->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.170455 rgba(0, 0, 0, 255), stop:1 rgba(121, 121, 121, 255));\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        pushButton_recordCall = new QPushButton(page_3);
        pushButton_recordCall->setObjectName(QStringLiteral("pushButton_recordCall"));
        pushButton_recordCall->setGeometry(QRect(840, 265, 150, 150));
        pushButton_recordCall->setFont(font1);
        pushButton_recordCall->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.170455 rgba(0, 0, 0, 255), stop:1 rgba(121, 121, 121, 255));\n"
"color: rgb(255, 255, 255);"));
        tableView_records = new QTableView(page_3);
        tableView_records->setObjectName(QStringLiteral("tableView_records"));
        tableView_records->setGeometry(QRect(100, 40, 630, 580));
        tableView_records->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        pushButton_PreSong = new QPushButton(page_4);
        pushButton_PreSong->setObjectName(QStringLiteral("pushButton_PreSong"));
        pushButton_PreSong->setGeometry(QRect(110, 610, 230, 90));
        pushButton_PreSong->setFont(font);
        pushButton_PreSong->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));"));
        pushButton_play_or_stop = new QPushButton(page_4);
        pushButton_play_or_stop->setObjectName(QStringLiteral("pushButton_play_or_stop"));
        pushButton_play_or_stop->setGeometry(QRect(340, 610, 230, 90));
        pushButton_play_or_stop->setFont(font);
        pushButton_play_or_stop->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));"));
        pushButton_vol = new QPushButton(page_4);
        pushButton_vol->setObjectName(QStringLiteral("pushButton_vol"));
        pushButton_vol->setGeometry(QRect(800, 610, 230, 90));
        pushButton_vol->setFont(font);
        pushButton_vol->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        verticalSlider_vol = new QSlider(page_4);
        verticalSlider_vol->setObjectName(QStringLiteral("verticalSlider_vol"));
        verticalSlider_vol->setGeometry(QRect(920, 450, 22, 160));
        verticalSlider_vol->setStyleSheet(QStringLiteral("selection-background-color: rgb(199, 199, 199);"));
        verticalSlider_vol->setOrientation(Qt::Vertical);
        pushButton_nextSong = new QPushButton(page_4);
        pushButton_nextSong->setObjectName(QStringLiteral("pushButton_nextSong"));
        pushButton_nextSong->setGeometry(QRect(570, 610, 230, 90));
        pushButton_nextSong->setFont(font);
        pushButton_nextSong->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(141, 141, 141, 255), stop:0.534091 rgba(0, 0, 0, 255), stop:1 rgba(148, 148, 148, 255));\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label_2 = new QLabel(page_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 40, 540, 60));
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        pushButton_open_or_close = new QPushButton(page_5);
        pushButton_open_or_close->setObjectName(QStringLiteral("pushButton_open_or_close"));
        pushButton_open_or_close->setGeometry(QRect(580, 40, 60, 60));
        QFont font4;
        font4.setPointSize(16);
        pushButton_open_or_close->setFont(font4);
        pushButton_disconnect = new QPushButton(page_5);
        pushButton_disconnect->setObjectName(QStringLiteral("pushButton_disconnect"));
        pushButton_disconnect->setGeometry(QRect(790, 310, 60, 161));
        pushButton_disconnect->setFont(font4);
        line_2 = new QFrame(page_5);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(100, 160, 540, 2));
        line_2->setStyleSheet(QStringLiteral("background-color: rgb(213, 213, 213);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(page_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 100, 270, 60));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_7 = new QLabel(page_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 280, 540, 30));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setWeight(50);
        label_7->setFont(font5);
        label_7->setStyleSheet(QLatin1String("\n"
"background-color: rgb(230, 230, 230);"));
        listWidget_MF_device = new QListWidget(page_5);
        listWidget_MF_device->setObjectName(QStringLiteral("listWidget_MF_device"));
        listWidget_MF_device->setGeometry(QRect(100, 310, 540, 160));
        QFont font6;
        font6.setFamily(QStringLiteral("Adobe Devanagari"));
        font6.setPointSize(24);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        listWidget_MF_device->setFont(font6);
        listWidget_MF_device->setStyleSheet(QStringLiteral("font: 24pt \"Adobe Devanagari\";"));
        listWidget_SF_Dev = new QListWidget(page_5);
        listWidget_SF_Dev->setObjectName(QStringLiteral("listWidget_SF_Dev"));
        listWidget_SF_Dev->setGeometry(QRect(100, 190, 540, 90));
        listWidget_SF_Dev->setStyleSheet(QLatin1String("border-top-color: rgb(255, 255, 255);\n"
"font: 24pt \"Adobe Devanagari\";\n"
"border-right-color: rgb(255, 255, 255);\n"
"border-left-color: rgb(255, 255, 255);\n"
"border-bottom-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(page_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(370, 100, 270, 60));
        label_4->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 28pt \"ADMUI3Lg\";\n"
"color: rgb(145, 145, 145);"));
        label_5 = new QLabel(page_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 161, 540, 30));
        label_5->setFont(font5);
        label_5->setStyleSheet(QLatin1String("\n"
"background-color: rgb(230, 230, 230);"));
        pushButton_connect = new QPushButton(page_5);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));
        pushButton_connect->setGeometry(QRect(650, 310, 61, 161));
        stackedWidget->addWidget(page_5);

        retranslateUi(CALL);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CALL);
    } // setupUi

    void retranslateUi(QWidget *CALL)
    {
        CALL->setWindowTitle(QApplication::translate("CALL", "Form", 0));
        pushButton_page1->setText(QApplication::translate("CALL", "\346\213\250\345\217\267\346\214\211\351\224\256", 0));
        pushButton_page4->setText(QApplication::translate("CALL", "\350\223\235\347\211\231\351\237\263\344\271\220", 0));
        pushButton_page3->setText(QApplication::translate("CALL", "\351\200\232\350\257\235\350\256\260\345\275\225", 0));
        pushButton_page2->setText(QApplication::translate("CALL", "\347\224\265\350\257\235\347\260\277", 0));
        pushButton_page5->setText(QApplication::translate("CALL", "\350\223\235\347\211\231\350\256\276\347\275\256", 0));
        pushButton_number1->setText(QApplication::translate("CALL", "1", 0));
        pushButton_sign->setText(QApplication::translate("CALL", "#", 0));
        pushButton_number8->setText(QApplication::translate("CALL", "8", 0));
        pushButton_callphone->setText(QApplication::translate("CALL", "\346\213\250\345\217\267", 0));
        pushButton_number2->setText(QApplication::translate("CALL", "2", 0));
        pushButton_number5->setText(QApplication::translate("CALL", "5", 0));
        pushButton_star->setText(QApplication::translate("CALL", "*", 0));
        pushButton_number9->setText(QApplication::translate("CALL", "9", 0));
        pushButton_number4->setText(QApplication::translate("CALL", "4", 0));
        pushButton_number3->setText(QApplication::translate("CALL", "3", 0));
        pushButton_delete->setText(QApplication::translate("CALL", "\345\210\240\351\231\244", 0));
        pushButton_number7->setText(QApplication::translate("CALL", "7", 0));
        label_phoneNumber->setText(QApplication::translate("CALL", "123 4567 8901", 0));
        pushButton_number0->setText(QApplication::translate("CALL", "0", 0));
        pushButton_number6->setText(QApplication::translate("CALL", "6", 0));
        pushButton_Contacts_callPhone->setText(QApplication::translate("CALL", "\346\213\250\345\217\267", 0));
        pushButton_Contacts_update->setText(QApplication::translate("CALL", "\346\233\264\346\226\260\350\201\224\347\263\273\344\272\272", 0));
        pushButton_recordCall->setText(QApplication::translate("CALL", "\346\213\250\345\217\267", 0));
        pushButton_PreSong->setText(QApplication::translate("CALL", "\344\270\212\344\270\200\351\246\226", 0));
        pushButton_play_or_stop->setText(QApplication::translate("CALL", "\346\222\255\346\224\276/\346\232\202\345\201\234", 0));
        pushButton_vol->setText(QApplication::translate("CALL", "\351\237\263\351\207\217", 0));
        pushButton_nextSong->setText(QApplication::translate("CALL", "\344\270\213\344\270\200\351\246\226", 0));
        label_2->setText(QApplication::translate("CALL", "\350\223\235\347\211\231", 0));
        pushButton_open_or_close->setText(QApplication::translate("CALL", "\345\274\200/\345\205\263", 0));
        pushButton_disconnect->setText(QApplication::translate("CALL", "\346\226\255\345\274\200", 0));
        label_3->setText(QApplication::translate("CALL", "\350\256\276\345\244\207\345\220\215\347\247\260", 0));
        label_7->setText(QApplication::translate("CALL", "\345\267\262\351\205\215\345\257\271\350\256\276\345\244\207", 0));
        label_4->setText(QApplication::translate("CALL", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">RD-1</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("CALL", "\345\217\257\347\224\250\350\256\276\345\244\207", 0));
        pushButton_connect->setText(QApplication::translate("CALL", "\350\277\236\346\216\245", 0));
    } // retranslateUi

};

namespace Ui {
    class CALL: public Ui_CALL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALL_H
