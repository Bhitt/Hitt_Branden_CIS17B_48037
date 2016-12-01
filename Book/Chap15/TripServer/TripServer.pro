#-------------------------------------------------
#
# Project created by QtCreator 2016-11-30T23:56:21
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TripServer
TEMPLATE = app


SOURCES += main.cpp\
        tripserver.cpp \
    clientsocket.cpp

HEADERS  += tripserver.h \
    clientsocket.h
