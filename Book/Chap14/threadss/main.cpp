#include "threaddialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    ThreadDialog dialog;
    dialog.show();
    return app.exec();
}
