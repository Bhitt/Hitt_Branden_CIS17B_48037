/*
 * Author:  Branden Hitt
 * Date:    September 7th, 2016
 * Purpose: Template for a window environment
 */

//System Level Libraries
#include <QApplication>
#include <QLabel>
#include <QString>

//User Libraries

//Global Constants

//Function Begins Here
int main(int argc, char *argv[])
{
    //Begins Qt Execution
    QApplication a(argc, argv);

    //Bring in a string
    QString display="Hello Windowing World";

    //Widget
    QLabel *label=new QLabel(display);

    //Show the Label
    label->show();

    //Exit Stage Right
    return a.exec();
}
