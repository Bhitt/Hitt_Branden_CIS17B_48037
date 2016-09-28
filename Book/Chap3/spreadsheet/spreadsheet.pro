#-------------------------------------------------
#
# Project created by QtCreator 2016-09-25T21:26:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = spreadsheet
TEMPLATE = app


SOURCES += cell.cpp \
                finddialog.cpp \
                gotocelldialog.cpp \
                main.cpp \
                mainwindow.cpp \
                sortdialog.cpp \
                spreadsheet.cpp

HEADERS  += cell.h \
                finddialog.h \
                gotocelldialog.h \
                mainwindow.h \
                sortdialog.h \
                spreadsheet.h

FORMS    += gotocelldialog.ui \
                sortdialog.ui
RESOURCES     = spreadsheet.qrc
