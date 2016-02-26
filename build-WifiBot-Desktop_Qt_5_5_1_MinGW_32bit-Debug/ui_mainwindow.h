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
#include <QtWidgets/QFormLayout>
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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnection;
    QAction *actionConfigurer;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Module;
    QProgressBar *progressBar;
    QLabel *label_3;
    QWidget *tab_connexion;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QOpenGLWidget *Affichage_camera;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLabel *label_8;
    QPushButton *pushButton_12;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLCDNumber *Vitesse_moteur_gauche;
    QPushButton *pushButton_3;
    QLCDNumber *Vitesse_moteur_droite;
    QLabel *label_6;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QSlider *verticalSlider;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 800);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1000, 800));
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
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(670, 60, 271, 181));
        Module = new QWidget();
        Module->setObjectName(QStringLiteral("Module"));
        progressBar = new QProgressBar(Module);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(90, 30, 118, 23));
        progressBar->setValue(24);
        label_3 = new QLabel(Module);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 30, 71, 21));
        tabWidget->addTab(Module, QString());
        tab_connexion = new QWidget();
        tab_connexion->setObjectName(QStringLiteral("tab_connexion"));
        formLayoutWidget = new QWidget(tab_connexion);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 331, 341));
        formLayout_2 = new QFormLayout(formLayoutWidget);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, pushButton);

        tabWidget->addTab(tab_connexion, QString());
        Affichage_camera = new QOpenGLWidget(centralWidget);
        Affichage_camera->setObjectName(QStringLiteral("Affichage_camera"));
        Affichage_camera->setGeometry(QRect(79, 59, 531, 331));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(360, 500, 41, 31));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(320, 470, 41, 31));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(320, 530, 41, 31));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 430, 121, 21));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(280, 500, 41, 31));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(820, 390, 41, 31));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(780, 360, 41, 31));
        Vitesse_moteur_gauche = new QLCDNumber(centralWidget);
        Vitesse_moteur_gauche->setObjectName(QStringLiteral("Vitesse_moteur_gauche"));
        Vitesse_moteur_gauche->setGeometry(QRect(680, 530, 64, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(780, 420, 41, 31));
        Vitesse_moteur_droite = new QLCDNumber(centralWidget);
        Vitesse_moteur_droite->setObjectName(QStringLiteral("Vitesse_moteur_droite"));
        Vitesse_moteur_droite->setGeometry(QRect(870, 530, 64, 23));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(850, 490, 101, 21));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(780, 390, 41, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(750, 310, 121, 21));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(660, 490, 111, 20));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(740, 390, 41, 31));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(650, 300, 311, 391));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(230, 400, 231, 201));
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(800, 500, 21, 141));
        verticalSlider->setOrientation(Qt::Vertical);
        MainWindow->setCentralWidget(centralWidget);
        listWidget_2->raise();
        listWidget->raise();
        tabWidget->raise();
        Affichage_camera->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        label_8->raise();
        pushButton_12->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        Vitesse_moteur_gauche->raise();
        pushButton_3->raise();
        Vitesse_moteur_droite->raise();
        label_6->raise();
        pushButton_4->raise();
        label_4->raise();
        label_5->raise();
        pushButton_5->raise();
        verticalSlider->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "WifiBot", 0));
        actionConnection->setText(QApplication::translate("MainWindow", "Connection", 0));
        actionConfigurer->setText(QApplication::translate("MainWindow", "Configurer", 0));
        label_3->setText(QApplication::translate("MainWindow", "Batterie", 0));
        tabWidget->setTabText(tabWidget->indexOf(Module), QApplication::translate("MainWindow", "Modules", 0));
        label->setText(QApplication::translate("MainWindow", "adresse IP", 0));
        label_2->setText(QApplication::translate("MainWindow", "Port", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Valider", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_connexion), QApplication::translate("MainWindow", "Connexion", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "R", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "U", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "D", 0));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Contr\303\264le du robot</span></p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("MainWindow", "Contr\303\264le de la cam\303\251ra", 0));
        pushButton_12->setText(QApplication::translate("MainWindow", "L", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "D", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Z", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "S", 0));
        label_6->setText(QApplication::translate("MainWindow", "Vitesse moteur droite", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "0", 0));
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Contr\303\264le du robot</span></p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MainWindow", "Contr\303\264le du robot", 0));
        label_5->setText(QApplication::translate("MainWindow", "Vitesse moteur gauche", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Q", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
