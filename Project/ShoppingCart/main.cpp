/*
 * File:   main.cpp
 * Author: Branden Hitt
 * Created on September 27th, 2016, 10:00 PM
 *      Purpose: Create a shopping cart for users to purchase items from
 */

//System Libraries
#include <QApplication>

//User Libraries
#include "mainwindow.h"

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char *argv[])
{
    //Being Qt execution
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
