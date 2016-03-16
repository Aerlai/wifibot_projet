#include "mainwindow.h"
#include <QApplication>
#include <QThread>
#include "robot.h"
#include <iostream>
#include <QtTest>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
