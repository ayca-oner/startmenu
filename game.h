#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>

class Game: public QGraphicsView{
    Q_OBJECT
public:
        //constructors
        Game (QWidget* parent=NULL);

        //public methods

        //public attributes
        QGraphicsScene* scene;

public slots:
        void start();
        void openHighscore();
        void displayMainMenu();
        void openSettings();
        void openInstructions();

};

#endif // GAME_H
