//User Libraries
#include "bullet.h"
#include "enemy.h"
#include "game.h"
//System and Qt Libraries
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>
#include <typeinfo>

extern Game *game; //there is an external global object called game

Bullet::Bullet(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem()
{
    //drew the rect
    setPixmap(QPixmap(":/images/sword.jpg"));

    //create and connect a timer to the instance of the bullet
    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    //set how often the timer reacts
    timer->start(10); //default value was 50, too slow

}

void Bullet::move()
{
    //if bullet collides with enemy, destroy both
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i=0, n=colliding_items.size();i<n;i++){
        if(typeid(*(colliding_items[i]))== typeid(Enemy)){
            //increase the score
            game->score->increase();
            //remove them both
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            //delete them both
            delete colliding_items[i];
            delete this;
            return; //this makes sure you dont try to move the now nonexistant bullet
        }
    }
    //move bullet up
    setPos(x(),y()-10);
    //check to see if bullet is off the screen
    if(pos().y() < 0){ //if the bullets bottom is above the screen
        scene()->removeItem(this);     //remove it from the scene
        delete this;                   //delete it
        //qDebug() << "bullet deleted";
    }
}
