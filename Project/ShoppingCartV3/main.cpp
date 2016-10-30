/* Author: Branden Hitt
 * Date Created: 10/02/16
 * Purpose: Utilize QT to make a shopping cart application
 */

//system libraries
#include <QApplication>

//user libraries
#include "mainwindow.h"

//execution starts here
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
