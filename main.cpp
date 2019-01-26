#include "mainwindow.h"
#include <QApplication>
#include "gamewidget.h"
#include "controller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    GameWidget g;
    Controller c(&a,&w,&g);

    return a.exec();
}
