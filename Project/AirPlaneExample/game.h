#ifndef GAME_H
#define GAME_H
//System and Qt Libraries
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
//User Libraries
#include "score.h"
#include "health.h"
#include "player.h"

class Game : public QGraphicsView{
public:
    Game(QWidget *parent=0);

    QGraphicsScene *scene;
    Player *player;
    Score *score;
    Health *health;

};

#endif // GAME_H
