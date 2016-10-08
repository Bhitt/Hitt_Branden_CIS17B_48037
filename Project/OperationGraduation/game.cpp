//System Libraries

//User Libraries
#include "game.h"
#include "map.h"

Game::Game(QWidget *parent)
{
    //set random seed
    //srand(static_cast<unsigned int>(time(0)));

    //create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,960,540); //dimensions
    setBackgroundBrush(QBrush(QImage(":/images/defaultBG.png"))); //default black background 960x540
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(960,540);

    //create the map
        //Map base(16,9);

        //display the room and add it as the current scene

        //create boundaries/loot locations

        //add the player


        //add the enemies

    show();
}
