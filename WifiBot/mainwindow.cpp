#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

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
    setWindowTitle(tr("keyReleaseEvent!!"));
}

