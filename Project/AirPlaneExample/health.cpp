#include "health.h"
#include <QFont>


Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    //initialize the score to zero
    health=3;

    //draw the text
    setPlainText(QString("Health: " + QString::number(health)));
    setDefaultTextColor(Qt::red);  //color
    setFont(QFont("times",16)); //string for font family and font size
}

void Health::decrease()
{
    health--;
    setPlainText(QString("Health: " + QString::number(health)));
}

int Health::getHealth()
{
    return health;
}
