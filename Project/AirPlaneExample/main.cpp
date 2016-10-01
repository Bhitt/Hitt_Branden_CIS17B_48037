/*
 * Author: Branden Hitt
 * Purpose: learn about QGraphicsView, QGraphicsScene, QGraphicsItem,
 *      QKeyEvent, events, QObject, QDebug, QGraphics text item, QMediaPlayer
 *      QPixmap, and a few more.
 */
//System and Qt Libraries
#include <QApplication>
//User Libraries
#include "game.h"
//Global Constants
Game *game;
int main(int argc, char *argv[])
{
    //Begin Qt Execution
    QApplication a(argc, argv);

    game = new Game();
    game->show();

    //Exit Stage Right
    return a.exec();
}
