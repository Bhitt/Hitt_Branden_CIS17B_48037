#include "signalsandslots.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SignalsAndSlots w = new SignalsAndSlots();
    w->show();

    return a.exec();
}
