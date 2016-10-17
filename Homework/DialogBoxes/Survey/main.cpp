/*
 * File:   main.cpp
 * Author: Branden Hitt
 * Created on September 27th, 2016, 8:10 PM
 *      Purpose: Survey the user
 */

//System Libraries
#include <QApplication>

//User Libraries
#include "mainwindow.h"

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char *argv[])
{
    //Begin Qt execution
    QApplication a(argc, argv);
    //Create Window
    MainWindow w;
    //show the window
    w.show();
    //Exit Stage Right
    return a.exec();
}
