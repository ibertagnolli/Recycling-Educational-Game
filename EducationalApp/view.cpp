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
 * @brief Moves user from titleScreen to purposeScreen.
 */
void View::on_startButton_clicked()
{
}

// PURPOSE SCREEN METHODS

void View::on_buttonToInstrScreen_clicked()
{

}

// INSTRUCTION SCREEN METHODS

void View::on_buttonToGameScreen_clicked()
{

}

// GAME SCREEN METHODS

// LOADING SCREEN METHODS

// CONCLUDING SCREEN METHODS






