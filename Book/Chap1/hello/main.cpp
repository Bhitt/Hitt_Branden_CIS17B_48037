#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    //Execute QT application
    QApplication a(argc, argv);

    //Widget
    QLabel *label = new QLabel("Hello QT!");

    //Show the widget
    label->show();

    return a.exec();
}
