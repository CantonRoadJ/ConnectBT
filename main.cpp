#include "mainwindow.h"
#include "tabwidget.h"
#include "call.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //TabWidget w;
    //w.setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint |Qt::WindowFullscreenButtonHint);
    //w.show();

    CALL w;
    w.show();

    return a.exec();
}
