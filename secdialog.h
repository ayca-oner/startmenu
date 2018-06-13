#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include <QGraphicsView>
#include <QGraphicsScene>

namespace Ui {
class secDialog;
}

class secDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secDialog(QWidget *parent = 0);
    ~secDialog();

    //public methods
    void displayHighscoreMenu();
    void openHighscore();

private:
    Ui::secDialog *ui;
};

#endif // SECDIALOG_H
