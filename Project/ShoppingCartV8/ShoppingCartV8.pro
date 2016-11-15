#-------------------------------------------------
#
# Project created by QtCreator 2016-10-29T19:10:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ShoppingCartV3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    loginchild.cpp \
    listingchild1.cpp \
    listingchild2.cpp

HEADERS  += mainwindow.h \
    loginchild.h \
    listingchild1.h \
    listingchild2.h

FORMS    += mainwindow.ui \
    loginchild.ui \
    listingchild1.ui \
    listingchild2.ui

RESOURCES += \
    res.qrc
