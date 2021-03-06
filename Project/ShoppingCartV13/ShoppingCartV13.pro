#-------------------------------------------------
#
# Project created by QtCreator 2016-10-29T19:10:55
#
#-------------------------------------------------

QT       += core gui \
            sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ShoppingCartV3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    loginchild.cpp \
    listingchild1.cpp \
    listingchild2.cpp \
    registerchild.cpp \
    listingchild3.cpp \
    checkoutchild.cpp

HEADERS  += mainwindow.h \
    loginchild.h \
    listingchild1.h \
    listingchild2.h \
    connection.h \
    registerchild.h \
    listingchild3.h \
    checkoutchild.h

FORMS    += mainwindow.ui \
    loginchild.ui \
    listingchild1.ui \
    listingchild2.ui \
    registerchild.ui \
    listingchild3.ui \
    checkoutchild.ui

RESOURCES += \
    res.qrc
