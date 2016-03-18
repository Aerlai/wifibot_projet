#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "thread_motorisation.h"
#include <QWidget>
#include <QKeyEvent>

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

private:
    Ui::MainWindow *ui;
    thread_motorisation * thread_robot;
};

#endif // MAINWINDOW_H
