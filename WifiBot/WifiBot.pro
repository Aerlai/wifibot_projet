#-------------------------------------------------
#
# Project created by QtCreator 2016-02-05T16:01:48
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += testlib
QT       += webkit
QT       += webkitwidgets


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WifiBot
TEMPLATE = app


SOURCES += main.cpp\
           mainwindow.cpp\
           robot.cpp \
    thread_motorisation.cpp


HEADERS  += mainwindow.h\
            robot.h \
    thread_motorisation.h



FORMS    += mainwindow.ui

DISTFILES +=

