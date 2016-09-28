#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    //begin Qt execution
    QApplication a(argc, argv);

    //push button
    QPushButton *button = new QPushButton("Quit");
    //connect button to widget
    QObject::connect(button, SIGNAL(clicked()),
                     &a, SLOT(quit()));

    //show widget
    button->show();

    return a.exec();
}
