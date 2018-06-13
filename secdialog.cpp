#include "secdialog.h"
#include "ui_secdialog.h"
#include "game.h"
#include <QCursor>
#include <QGraphicsTextItem>
#include "button.h"
#include "highscore.h"
#include "highscore.cpp"
#include "button.cpp"


secDialog::secDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secDialog)
{
    ui->setupUi(this);
    setFixedSize(700,400);
    //connect(Button::highscoreButton(),SIGNAL(clicked()),this,SLOT(displayHighscoreMenu()));
    void displayHighscoreMenu();
}

secDialog::~secDialog()
{
    delete ui;
}

