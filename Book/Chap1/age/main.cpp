#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    //Begin QT application
    QApplication a(argc, argv);

    //Widget
    QWidget *window = new QWidget;
    window->setWindowTitle("Enter Your Age");

    //SpinBox
    QSpinBox *spinBox = new QSpinBox;
    //Slider
    QSlider *slider = new QSlider(Qt::Horizontal);
    //set ranges
    spinBox->setRange(0,130);
    slider->setRange(0,130);

    //connect spinbox to slider
    QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                     slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     spinBox, SLOT(setValue(int)));
    spinBox->setValue(35);

    //create layout
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(slider);
    window->setLayout(layout);

    //show window
    window->show();

    return a.exec();
}
