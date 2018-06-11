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
        void displayMainMenu();

        //public attributes
        QGraphicsScene* scene;
        // for hewboard HexBoard* hexboard; TODO

public slots:
        void start();
};

#endif // GAME_H
