#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Robot.h"
#include "thread_motorisation.h"
#include <QTest>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    thread1 = new thread_motorisation("192.168.1.106", 15020);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // test du socket
    //thread1->start();

    Robot * bot = new Robot();
    bot->mise_a_jour_info_connexion("192.168.1.106", 15020);
    bot->connexion();
    for(int i = 0; i <100;i++)
    {
        bot->avant(1.0);
        QTest::qWait(25);
    }


}
