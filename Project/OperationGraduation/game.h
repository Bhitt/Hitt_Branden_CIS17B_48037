#ifndef GAME_H
#define GAME_H

//System Libraries
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QWidget>

//User Libraries
#include "player.h"
class Game: public QGraphicsView{

public:
    Game(QWidget *parent=0);

    QGraphicsScene *scene; //display
    Player *player;

};

#endif // GAME_H
