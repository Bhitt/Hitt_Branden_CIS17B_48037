//User Libraries
#include "player.h"
#include "bullet.h"
#include "enemy.h"
//System and Qt Libraries
#include <QGraphicsScene>
#include <QKeyEvent>

Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl("qrc:/sounds/bullet.mp3"));

    //set graphic
    setPixmap(QPixmap(":/images/snow.png"));
}

void Player::keyPressEvent(QKeyEvent *event)
{
    //move the player left and right
    if(event->key() == Qt::Key_Left){
        if(pos().x() > 0)
            setPos(x()-10,y());
    }else if (event->key() == Qt::Key_Right){
        if (pos().x() + 100 < 800)
        setPos(x()+10,y());
    }
    // shoot with the spacebar
    else if (event->key() == Qt::Key_Space){
        // create a bullet
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);

        //play bullet sound
        if(bulletsound->state()== QMediaPlayer::PlayingState){
            bulletsound->setPosition(0);
        }else if (bulletsound->state()== QMediaPlayer::StoppedState){
            bulletsound->play();
        }
    }
}

void Player::spawn(){
    // create an enemy
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}
