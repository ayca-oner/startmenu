
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include "game.h"
#include "secdialog.h"
#include "highscore.h"

Game* game;
//Highscore* highscore;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    game= new Game();
    game->show();
    game->displayMainMenu();



//    highscore= new Highscore();
//    highscore->show();
//    highscore->displayHighscoreMenu();


    return a.exec();
}
