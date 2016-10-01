#-------------------------------------------------
#
# Project created by QtCreator 2016-09-30T17:26:12
#
#-------------------------------------------------

QT       += core gui \
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AirPlaneExample
TEMPLATE = app


SOURCES += main.cpp \
    bullet.cpp \
    enemy.cpp \
    game.cpp \
    score.cpp \
    health.cpp \
    player.cpp

HEADERS  += \
    bullet.h \
    enemy.h \
    game.h \
    score.h \
    health.h \
    player.h

FORMS    +=

RESOURCES += \
    res.qrc
