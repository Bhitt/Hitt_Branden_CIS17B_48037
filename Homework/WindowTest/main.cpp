/*
 * Author:  Branden Hitt
 * Date:    September 7th, 2016
 * Purpose: Template for a window environment
 */

//System Level Libraries
#include <QApplication>
#include <QLabel>
#include <QString>
#include "mainwindow.h"
#include <QApplication>
//User Libraries

//Global Constants

//Function Begins Here
int main(int argc, char *argv[])
{
    //Begins Qt Execution
    QApplication a(argc, argv);

    //Bring in a string
    QString display="100 101 102 103 104 105 \n106 107 108 109 110 111";

    //Widget
    QLabel *label=new QLabel(display);

    //Show the Label
    label->show();

    //Exit Stage Right
    return a.exec();
}
