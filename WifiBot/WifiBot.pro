#-------------------------------------------------
#
# Project created by QtCreator 2016-02-05T16:01:48
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WifiBot
TEMPLATE = app


SOURCES += main.cpp\
<<<<<<< HEAD
        mainwindow.cpp

HEADERS  += mainwindow.h
=======
           mainwindow.cpp \
           robot.cpp

HEADERS  += mainwindow.h \
            robot.h
>>>>>>> refs/remotes/origin/master

FORMS    += mainwindow.ui
