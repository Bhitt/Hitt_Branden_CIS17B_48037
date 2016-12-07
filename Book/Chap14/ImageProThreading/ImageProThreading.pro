#-------------------------------------------------
#
# Project created by QtCreator 2016-12-07T00:19:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ImageProThreading
TEMPLATE = app


SOURCES += main.cpp\
        imagewindow.cpp \
    transactionthread.cpp

HEADERS  += imagewindow.h \
    transactionthread.h

FORMS += \
    resizedialog.ui
