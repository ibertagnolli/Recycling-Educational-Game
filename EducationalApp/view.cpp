#include "view.h"
#include "ui_view.h"

View::View(QWidget *parent)
    : QMainWindow(parent)
      , ui(new Ui::View)
{
    ui->setupUi(this);
}

View::~View()
{
    delete ui;
}

// TITLE SCREEN METHODS
/**
 * @brief Called
 */
void View::on_startButton_clicked()
{

}

// PURPOSE SCREEN METHODS

// INSTRUCTION SCREEN METHODS

// GAME SCREEN METHODS

// LOADING SCREEN METHODS

// CONCLUDING SCREEN METHODS
