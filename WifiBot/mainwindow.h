#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
<<<<<<< HEAD
#include <QWidget>
#include <QKeyEvent>
=======
#include "thread_motorisation.h"
>>>>>>> refs/remotes/origin/master

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
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    thread_motorisation * thread1;
};


#endif // MAINWINDOW_H
