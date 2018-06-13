#include "game.h"
#include <QCursor>
#include <QGraphicsTextItem>
#include "button.h"
#include "secdialog.h"
#include "highscore.h"
#include "highscore.cpp"


Game::Game(QWidget *parent)
{
    //set up the screen
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    //set up the scene
    scene = new QGraphicsScene();
    scene -> setSceneRect(0,0,800,600);
    setScene(scene);

}

void Game::start(){
//   TODO;
}

void Game::openHighscore(){
//    secDialog highscoreWindow;
//    highscoreWindow.setModal(true);
//    highscoreWindow.exec();
//    void displayHighscoreMenu();

    scene->clear();
    QGraphicsTextItem* aText = new QGraphicsTextItem(QString("Highscores"));
    QFont titleFont("comic sans",20);
    aText->setFont(titleFont);
    int txPos = this->width()/2 - aText->boundingRect().width()/2;
    int tyPos = 150;
    aText->setPos(txPos,tyPos);
    scene->addItem(aText);

    //create back to main menu button
    Button* backButton = new Button(QString("Back to Main Menu"));
    int bbxPos = this->width()/2 - backButton->boundingRect().width()/2;
    int bbyPos = 500;
    backButton->setPos(bbxPos,bbyPos);
    connect(backButton,SIGNAL(clicked()),this,SLOT(displayMainMenu()));
    scene->addItem(backButton);
}

void Game::openSettings(){

    scene->clear();
    QGraphicsTextItem* aText = new QGraphicsTextItem(QString("Settings"));
    QFont titleFont("comic sans",20);
    aText->setFont(titleFont);
    int txPos = this->width()/2 - aText->boundingRect().width()/2;
    int tyPos = 200;
    aText->setPos(txPos,tyPos);
    scene->addItem(aText);

    //create back to main menu button
    Button* soundButton = new Button(QString("Sounds On/Off"));
    int sxPos = this->width()/2 - soundButton->boundingRect().width()/2;
    int syPos = 275;
    soundButton->setPos(sxPos,syPos);
    //connect(soundButton,SIGNAL(clicked()),this,SLOT(displayMainMenu()));
    scene->addItem(soundButton);

    //create back to main menu button
    Button* musicButton = new Button(QString("Music On/Off"));
    int mxPos = this->width()/2 - musicButton->boundingRect().width()/2;
    int myPos = 350;
    musicButton->setPos(mxPos,myPos);
    //connect(musicButton,SIGNAL(clicked()),this,SLOT(displayMainMenu()));
    scene->addItem(musicButton);

    //create back to main menu button
    Button* backButton = new Button(QString("Back to Main Menu"));
    int bbxPos = this->width()/2 - backButton->boundingRect().width()/2;
    int bbyPos = 425;
    backButton->setPos(bbxPos,bbyPos);
    connect(backButton,SIGNAL(clicked()),this,SLOT(displayMainMenu()));
    scene->addItem(backButton);
}

void Game::displayMainMenu()
{
    scene->clear();
    //Create the title text
    QGraphicsTextItem* titleText = new QGraphicsTextItem(QString("Move the Cube"));
    QFont titleFont("comic sans",50);
    titleText->setFont(titleFont);
    int txPos = this->width()/2 - titleText->boundingRect().width()/2;
    int tyPos = 150;
    titleText->setPos(txPos,tyPos);
    scene->addItem(titleText);

    //create the play button
    Button* playButton = new Button(QString("Play"));
    int bxPos = this->width()/2 - playButton->boundingRect().width()/2;
    int byPos = 275;
    playButton->setPos(bxPos,byPos);
    //connect(playButton,SIGNAL(clicked()),this,SLOT(start()));  write the star code
    scene->addItem(playButton);

    //create the highscore button
    Button* highscoreButton = new Button(QString("Highcore"));
    int hxPos = this->width()/2 - highscoreButton->boundingRect().width()/2;
    int hyPos = 350;
    highscoreButton->setPos(hxPos,hyPos);
    connect(highscoreButton,SIGNAL(clicked()),this,SLOT(openHighscore()));
    scene->addItem(highscoreButton);

    //create the settings button
    Button* settingsButton = new Button(QString("Settings"));
    int sxPos = this->width()/2 - settingsButton->boundingRect().width()/2;
    int syPos = 425;
    settingsButton->setPos(sxPos,syPos);
    connect(settingsButton,SIGNAL(clicked()),this,SLOT(openSettings()));
    scene->addItem(settingsButton);

    //create the quit button
     Button* quitButton = new Button(QString("Quit"));
     int qxPos = this->width()/2 - quitButton->boundingRect().width()/2;
     int qyPos = 500;
     quitButton->setPos(qxPos,qyPos);
     connect(quitButton,SIGNAL(clicked()),this,SLOT(close()));
     scene->addItem(quitButton);


}
