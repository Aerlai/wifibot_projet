#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Robot.h"
#include "thread_motorisation.h"
#include <QTest>
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    thread_robot = new thread_motorisation();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent* event) {
    //float vit = (ui->vitesse->value())/100;
    switch(event->key()){
    case Qt::Key_Z:
        ui->pushButton_7->animateClick();
        thread_robot->commande_moteur(1,1.0);
        break;
    case Qt::Key_S:
        ui->pushButton_3->animateClick();
        thread_robot->commande_moteur(2,1.0);
        break;
    case Qt::Key_Q:
        ui->pushButton_5->animateClick();
        thread_robot->commande_moteur(3,1.0);
        break;
    case Qt::Key_D:
        ui->pushButton_6->animateClick();
        thread_robot->commande_moteur(4,1.0);
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
    switch(event->key()){
    case Qt::Key_Z:
        thread_robot->commande_moteur(0,0.0);
        break;
    case Qt::Key_S:
        thread_robot->commande_moteur(0,0.0);
        break;
    case Qt::Key_Q:
        thread_robot->commande_moteur(0,0.0);
        break;
    case Qt::Key_D:
        thread_robot->commande_moteur(0,0.0);
        break;
    case Qt::Key_0:
        thread_robot->commande_moteur(0,0.0);
        break;
    }
}

// Bouton connexion
void MainWindow::on_pushButton_connexion_clicked()
{
    thread_robot->mise_a_jour_info_connexion("192.168.1.106", 15020);
    thread_robot->start(); // lancement du thread
}

void MainWindow::on_pushButton_deconnexion_clicked()
{
    thread_robot->stop();
}
