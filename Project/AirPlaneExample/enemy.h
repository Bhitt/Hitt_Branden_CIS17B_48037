#ifndef ENEMY_H
#define ENEMY_H

//System and Qt Libraries
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Enemy: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Enemy(QGraphicsItem *parent=0); //default constructor
public slots:
    void move(); //method for moving the bullet accross the screen
};

#endif // ENEMY_H
