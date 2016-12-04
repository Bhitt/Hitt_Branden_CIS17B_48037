#include "tripserver.h"

#include <QApplication>
#include <QPushButton>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    TripServer server;
     if (!server.listen(QHostAddress::Any, 6178)) {
//    if (!server.listen(QHostAddress::LocalHost, 6178)) {

        std::cerr << "Failed to bind to port" << std::endl;
        return 1;
     }

     QPushButton quitButton(QObject::tr("&Quit"));
     quitButton.setWindowTitle(QObject::tr("Trip Server"));
     QObject::connect(&quitButton, SIGNAL(clicked()),
                         &app, SLOT(quit()));
     quitButton.show();
     return app.exec();
}
