#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "thread_motorisation.h"
#include <QWidget>
#include <QKeyEvent>
#include <QNetworkAccessManager>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* event);

    Robot * bot;

private slots:
    void on_pushButton_connexion_clicked();

    void on_pushButton_deconnexion_clicked();

    void on_pushButton_7_pressed();

    void on_pushButton_7_released();

    void on_pushButton_3_pressed();

    void on_pushButton_3_released();

    void on_pushButton_6_pressed();

    void on_pushButton_6_released();

    void on_pushButton_5_pressed();

    void on_pushButton_5_released();

    void on_bouton_AvantGauche_pressed();

    void on_bouton_AvantDroit_pressed();

    void on_bouton_ArriereGauche_pressed();

    void on_bouton_ArriereDroit_pressed();

    void on_bouton_AvantGauche_released();

    void on_bouton_AvantDroit_released();

    void on_bouton_ArriereGauche_released();

    void on_bouton_ArriereDroit_released();

    void on_reset_camera_clicked();

    void on_cameraHaut_pressed();

    void on_cameraBas_pressed();

    void on_cameraGauche_pressed();

    void on_cameraDroite_pressed();

private:
    Ui::MainWindow *ui;
    thread_motorisation * thread_robot;
    bool key_pressed_z,key_pressed_q,key_pressed_s,key_pressed_d;
    void commande_robot();
    void resetCam();
    QNetworkAccessManager * camera;
};

#endif // MAINWINDOW_H
