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

void MainWindow::keyPressEvent(QKeyEvent* event) {

    switch(event->key()){
    case Qt::Key_Z:
        ui->pushButton_7->animateClick();
        break;
    case Qt::Key_S:
        ui->pushButton_3->animateClick();
        break;
    case Qt::Key_Q:
        ui->pushButton_5->animateClick();
        break;
    case Qt::Key_D:
        ui->pushButton_6->animateClick();
        break;
    case Qt::Key_K:
        ui->pushButton_10->animateClick();
        break;
    case Qt::Key_J:
        ui->pushButton_12->animateClick();
        break;
    case Qt::Key_L:
        ui->pushButton_8->animateClick();
        break;
    case Qt::Key_I:
        ui->pushButton_9->animateClick();
        break;
    case Qt::Key_0:
        ui->pushButton_4->animateClick();
        break;

    }

}

void MainWindow::keyReleaseEvent(QKeyEvent* event) {

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
