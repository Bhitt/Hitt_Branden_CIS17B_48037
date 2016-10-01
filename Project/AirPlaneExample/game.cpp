//User Libraries
#include "enemy.h"
#include "game.h"

//System and Qt Libraries
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QMediaPlayer>
#include <QImage>

Game::Game(QWidget *parent){
    //Create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600); //make the scene 800x600

    //create a background (commented since it did not look good)
    //setBackgroundBrush(QBrush(QImage(":/images/background.jpg")));

    //make the newly created scene the scene to visualize
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    //create the player
    player = new Player();
    player->setPos(400,500); //
    //make the player focusable and set it to be the current focus
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    //add the player to the scene
    scene->addItem(player);

    //create the score/health
    score = new Score();  //at origin
    scene->addItem(score);
    health = new Health();
    health->setPos(health->x(),health->y()+25); //below score
    scene->addItem(health);

    //spawn enemies
    QTimer *timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(2000);

    //play background music
    QMediaPlayer *music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/Derezzed.mp3"));
    music->play();

    show();

}
