#-------------------------------------------------
#
# Project created by QtCreator 2016-12-05T18:01:36
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = survey_base
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    lchild.cpp \
    registeruser.cpp \
    createchild.cpp \
    menuchild.cpp \
    takechild.cpp \
    surveylistchild.cpp \
    resultchild.cpp

HEADERS  += mainwindow.h \
    login.h \
    lchild.h \
    registeruser.h \
    createchild.h \
    menuchild.h \
    takechild.h \
    connection.h \
    surveylistchild.h \
    resultchild.h

FORMS    += mainwindow.ui \
    createchild.ui \
    menuchild.ui \
    takechild.ui \
    surveylistchild.ui \
    resultchild.ui
