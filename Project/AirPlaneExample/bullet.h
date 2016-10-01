#ifndef BULLET_H
#define BULLET_H

//System and Qt Libraries
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>

class Bullet: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Bullet(QGraphicsItem *parent=0); //default constructor
public slots:
    void move(); //method for moving the bullet accross the screen
};



#endif // BULLET_H
