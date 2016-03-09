#include "mainwindow.h"
#include <QApplication>
#include <QThread>
#include "robot.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    // test du socket
    Robot * bot = new Robot();
    cout << "socket cree" << endl;
    bot->mise_a_jour_info_connexion("192.168.1.106", 15020);
    bot->connexion();
    int c = 0;
    while(c<10000)
    {
        bot->avant(1.0);
        c++;
    }

    return a.exec();
}
