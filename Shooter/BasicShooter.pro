#-------------------------------------------------
#
# Project created by QtCreator 2016-09-28T13:41:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BasicShooter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    world.cpp \
    enemy.cpp \
    bullet.cpp \
    health.cpp \
    score.cpp

HEADERS  += mainwindow.h \
    world.h \
    player.h \
    enemy.h \
    bullet.h \
    health.h \
    score.h

FORMS    += mainwindow.ui

RESOURCES += \
    files.qrc
