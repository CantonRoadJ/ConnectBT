#-------------------------------------------------
#
# Project created by QtCreator 2017-08-03T14:57:00
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = connectBT
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    comingcall.cpp \
    misscall.cpp \
    call.cpp \
    tabwidget.cpp \
    disconnectbt.cpp \
    calling.cpp \
    calling_number.cpp \
    public.cpp \
    readcommand.cpp

HEADERS  += mainwindow.h \
    comingcall.h \
    misscall.h \
    call.h \
    tabwidget.h \
    disconnectbt.h \
    calling.h \
    calling_number.h \
    public.h \
    readcommand.h

FORMS    += connectBT.ui \
    comingcall.ui \
    misscall.ui \
    call.ui \
    tabwidget.ui \
    disconnectbt.ui \
    calling.ui \
    calling_number.ui

RESOURCES += \
    image.qrc
