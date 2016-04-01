#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Robot.h"
#include "thread_motorisation.h"
#include <QTest>
#include <iostream>
#include <QtNetwork>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    thread_robot = new thread_motorisation();
    camera = new QNetworkAccessManager(this);
    key_pressed_z = false;
    key_pressed_q = false;
    key_pressed_s = false;
    key_pressed_d = false;
    ui->bouton_AvantGauche->hide();
    ui->bouton_AvantDroit->hide();
    ui->bouton_ArriereGauche->hide();
    ui->bouton_ArriereDroit->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent* event) {
    //float vit = (ui->vitesse->value())/100;
    switch(event->key()){
    case Qt::Key_Z:
//        ui->pushButton_7->animateClick();
        key_pressed_z=true;
        break;
    case Qt::Key_S:
//        ui->pushButton_3->animateClick();
        key_pressed_s = true;
        break;
    case Qt::Key_Q:
//        ui->pushButton_5->animateClick();
        key_pressed_q = true;
        break;
    case Qt::Key_D:
//        ui->pushButton_6->animateClick();
        key_pressed_d = true;
        break;
    case Qt::Key_K:
        ui->cameraBas->animateClick();
        break;
    case Qt::Key_J:
        ui->cameraGauche->animateClick();
        break;
    case Qt::Key_L:
        ui->cameraDroite->animateClick();
        break;
    case Qt::Key_I:
        ui->cameraHaut->animateClick();
        break;
    case Qt::Key_F:
        thread_robot->commande_moteur(0,0.0);
        break;
    }
    commande_robot();
}

void MainWindow::commande_robot()
{
    // avant droite
    if(key_pressed_z == true && key_pressed_q == false && key_pressed_s == false && key_pressed_d == true)
    {
        on_bouton_AvantDroit_pressed();
    }
    // avant gauche
    else if(key_pressed_z == true && key_pressed_q == true && key_pressed_s == false && key_pressed_d == false)
    {
        on_bouton_AvantGauche_pressed();
    }
    // arriere droite
    else if(key_pressed_z == false && key_pressed_q == false && key_pressed_s == true && key_pressed_d == true)
    {
        on_bouton_ArriereDroit_pressed();
    }
    // arriere gauche
    else if(key_pressed_z == false && key_pressed_q == true && key_pressed_s == true && key_pressed_d == false)
    {
        on_bouton_ArriereGauche_pressed();
    }
    // arriere
    else if(key_pressed_z == false && key_pressed_q == false && key_pressed_s == true && key_pressed_d == false)
    {
        on_pushButton_3_pressed();
    }
    //gauche
    else if(key_pressed_z == false && key_pressed_q == true && key_pressed_s == false && key_pressed_d == false)
    {
        on_pushButton_5_pressed();
    }
    // droite
    else if(key_pressed_z == false && key_pressed_q == false && key_pressed_s == false && key_pressed_d == true)
    {
        on_pushButton_6_pressed();
    }
    //avant
    else if(key_pressed_z == true && key_pressed_q == false && key_pressed_s == false && key_pressed_d == false)
    {
        on_pushButton_7_pressed();
    }
}

void MainWindow::keyReleaseEvent(QKeyEvent* event) {
    switch(event->key()){
    case Qt::Key_Z:
//        ui->pushButton_7->animateClick();
        key_pressed_z = false;
        break;
    case Qt::Key_S:
//        ui->pushButton_3->animateClick();
        key_pressed_s = false;
        break;
    case Qt::Key_Q:
//        ui->pushButton_5->animateClick();
        key_pressed_q = false;
        break;
    case Qt::Key_D:
//        ui->pushButton_6->animateClick();
        key_pressed_d = false;
        break;
    case Qt::Key_F:
//        ui->pushButton_4->animateClick();
        thread_robot->commande_moteur(0,0.0);
        break;
    }
    commande_robot();
    if(key_pressed_z == false && key_pressed_q == false && key_pressed_s == false && key_pressed_d == false)
    {
        on_pushButton_7_released();
        on_pushButton_3_released();
        on_pushButton_5_released();
        on_pushButton_6_released();
        on_bouton_AvantGauche_released();
        on_bouton_AvantDroit_released();
        on_bouton_ArriereGauche_released();
        on_bouton_ArriereDroit_released();
    }
}

// Bouton connexion
void MainWindow::on_pushButton_connexion_clicked()
{
    thread_robot->mise_a_jour_info_connexion(ui->champ_ip->text(), ui->champ_port->text().toInt());
    thread_robot->start(); // lancement du thread
    ui->webView->setUrl(QUrl("http://192.168.1.106:8080/javascript_simple.html"));
    //qDebug() << thread_robot->recevoir() << endl;
}
void MainWindow::on_pushButton_deconnexion_clicked()
{
    thread_robot->stop();
    ui->webView->setUrl(QUrl("about:blank"));
}


// bouton avancer Z
void MainWindow::on_pushButton_7_pressed()
{
    key_pressed_z = true;
    thread_robot->commande_moteur(1,(float)ui->vitesse->value()/100);
}
void MainWindow::on_pushButton_7_released()
{
    key_pressed_z = false;
    thread_robot->commande_moteur(0,0);
}

// bouton reculer S
void MainWindow::on_pushButton_3_pressed()
{
    key_pressed_s = true;
    thread_robot->commande_moteur(2,(float)ui->vitesse->value()/100);
}
void MainWindow::on_pushButton_3_released()
{
    key_pressed_s = false;
    thread_robot->commande_moteur(0,0.0);
}

// bouton droite D
void MainWindow::on_pushButton_6_pressed()
{
    key_pressed_d = true;
    thread_robot->commande_moteur(4,(float)ui->vitesse->value()/100);
}
void MainWindow::on_pushButton_6_released()
{
    key_pressed_d = false;
    thread_robot->commande_moteur(0,0.0);
}

// bouton gauche Q
void MainWindow::on_pushButton_5_pressed()
{
    key_pressed_q = true;
    thread_robot->commande_moteur(3,(float)ui->vitesse->value()/100);
}

void MainWindow::on_pushButton_5_released()
{
    key_pressed_q = false;
    thread_robot->commande_moteur(0,0.0);
}

void MainWindow::on_bouton_AvantGauche_pressed()
{
    thread_robot->commande_moteur(6,(float)ui->vitesse->value()/100);
}

void MainWindow::on_bouton_AvantDroit_pressed()
{
    thread_robot->commande_moteur(5,(float)ui->vitesse->value()/100);
}

void MainWindow::on_bouton_ArriereGauche_pressed()
{
    thread_robot->commande_moteur(8,(float)ui->vitesse->value()/100);
}

void MainWindow::on_bouton_ArriereDroit_pressed()
{
    thread_robot->commande_moteur(7,(float)ui->vitesse->value()/100);
}

void MainWindow::on_bouton_AvantGauche_released()
{
    thread_robot->commande_moteur(0,0.0);
}

void MainWindow::on_bouton_AvantDroit_released()
{
    thread_robot->commande_moteur(0,0.0);
}

void MainWindow::on_bouton_ArriereGauche_released()
{
    thread_robot->commande_moteur(0,0.0);
}

void MainWindow::on_bouton_ArriereDroit_released()
{
    thread_robot->commande_moteur(0,0.0);
}

void MainWindow::resetCam()
{
    QUrl url("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094855&group=1&value=1");
    camera->get(QNetworkRequest(url));
    QUrl url2("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094854&group=1&value=1");
    camera->get(QNetworkRequest(url2));
    ;
}

void MainWindow::on_reset_camera_clicked()
{
    resetCam();
}

void MainWindow::on_cameraHaut_pressed()
{
    QUrl url("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=-200");
    camera->get(QNetworkRequest(url));
}

void MainWindow::on_cameraBas_pressed()
{

    QUrl url("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=200");
    camera->get(QNetworkRequest(url));
}

void MainWindow::on_cameraGauche_pressed()
{
    QUrl url("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=200");
    camera->get(QNetworkRequest(url));
}

void MainWindow::on_cameraDroite_pressed()
{
    QUrl url("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=-200");
    camera->get(QNetworkRequest(url));
}
