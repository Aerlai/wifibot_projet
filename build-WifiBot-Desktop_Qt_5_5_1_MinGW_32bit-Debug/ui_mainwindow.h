/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnection;
    QAction *actionConfigurer;
    QWidget *centralWidget;
    QOpenGLWidget *Affichage_camera;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLCDNumber *Vitesse_moteur_gauche;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QSlider *verticalSlider;
    QListWidget *listWidget_3;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_3;
    QProgressBar *progressBar_2;
    QPushButton *pushButton_12;
    QPushButton *pushButton_8;
    QListWidget *listWidget_2;
    QLabel *label_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(689, 694);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(689, 600));
        MainWindow->setMaximumSize(QSize(1000, 800));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(240, 235, 206, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setAcceptDrops(false);
        actionConnection = new QAction(MainWindow);
        actionConnection->setObjectName(QStringLiteral("actionConnection"));
        actionConfigurer = new QAction(MainWindow);
        actionConfigurer->setObjectName(QStringLiteral("actionConfigurer"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Affichage_camera = new QOpenGLWidget(centralWidget);
        Affichage_camera->setObjectName(QStringLiteral("Affichage_camera"));
        Affichage_camera->setGeometry(QRect(79, 10, 531, 331));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(190, 500, 41, 31));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(150, 470, 41, 31));
        Vitesse_moteur_gauche = new QLCDNumber(centralWidget);
        Vitesse_moteur_gauche->setObjectName(QStringLiteral("Vitesse_moteur_gauche"));
        Vitesse_moteur_gauche->setGeometry(QRect(310, 580, 64, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 530, 41, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(150, 500, 41, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 430, 121, 21));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(300, 400, 91, 16));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(110, 500, 41, 31));
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(330, 440, 21, 121));
        verticalSlider->setMaximum(240);
        verticalSlider->setOrientation(Qt::Vertical);
        listWidget_3 = new QListWidget(centralWidget);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(80, 400, 191, 201));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(440, 620, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 619, 51, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 645, 20, 20));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(161, 645, 251, 20));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 650, 75, 23));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 620, 251, 20));
        progressBar_2 = new QProgressBar(centralWidget);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(77, 360, 571, 23));
        progressBar_2->setValue(50);
        progressBar_2->setInvertedAppearance(false);
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(450, 500, 41, 31));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(530, 500, 41, 31));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(420, 400, 191, 201));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(450, 430, 131, 21));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(490, 470, 41, 31));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(490, 530, 41, 31));
        MainWindow->setCentralWidget(centralWidget);
        listWidget_2->raise();
        listWidget_3->raise();
        Affichage_camera->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        Vitesse_moteur_gauche->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        label_4->raise();
        label_5->raise();
        pushButton_5->raise();
        verticalSlider->raise();
        pushButton->raise();
        label->raise();
        label_2->raise();
        lineEdit_2->raise();
        pushButton_2->raise();
        lineEdit_3->raise();
        progressBar_2->raise();
        pushButton_12->raise();
        pushButton_8->raise();
        label_8->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
<<<<<<< HEAD
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), Vitesse_moteur_gauche, SLOT(display(int)));
=======

        tabWidget->setCurrentIndex(0);

>>>>>>> refs/remotes/origin/master

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "WifiBot", 0));
        actionConnection->setText(QApplication::translate("MainWindow", "Connection", 0));
        actionConfigurer->setText(QApplication::translate("MainWindow", "Configurer", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "D", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Z", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "S", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "0", 0));
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Contr\303\264le du robot</span></p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Contr\303\264le du robot</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Vitesse moteur</span></p></body></html>", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Q", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Connexion", 0));
        label->setText(QApplication::translate("MainWindow", "adresse IP", 0));
        label_2->setText(QApplication::translate("MainWindow", "Port", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Deconnexion", 0));
        progressBar_2->setFormat(QString());
        pushButton_12->setText(QApplication::translate("MainWindow", "J", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "L", 0));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Contr\303\264le du robot</span></p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Contr\303\264le de la cam\303\251ra</span></p></body></html>", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "I", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "K", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
