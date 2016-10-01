//User Libraries
#include "enemy.h"
#include "game.h"
//System and Qt Libraries
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <stdlib.h>
#include <QPixmap>
#include <QList>

extern Game *game;

Enemy::Enemy(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)
{
    //set random position
    int random_number = rand()%700;
    setPos(random_number,0);
    //drew the rect
    setPixmap(QPixmap(":/images/ice.png"));

    //create and connect a timer to the instance of the bullet
    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    //set how often the timer reacts
    timer->start(50);

}

void Enemy::move()
{
    //move enemy down
    setPos(x(),y()+5);
    //check to see if enemy is off the screen
    if(pos().y() > 600){ //if the enemy's top is below the screen
        //decrease player health
        game->health->decrease();
        scene()->removeItem(this);     //remove it from the scene
        delete this;                   //delete it
        //qDebug() << "enemy deleted";
    }
}
