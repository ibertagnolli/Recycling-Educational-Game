#include "view.h"
#include "ui_view.h"

View::View(QWidget *parent)
    : QMainWindow(parent)
      , ui(new Ui::View)
{
    ui->setupUi(this);
    // ui->titleScreen->
    ui->wizard->setPixmap(
        QPixmap("/Users/isabellabertagnolli/a8-Edu-app/a8-edu-app-ibertagnolli/wizardBig.png"));
    ui->backgroundImage->setPixmap(
        QPixmap("/Users/isabellabertagnolli/a8-Edu-app/a8-edu-app-ibertagnolli/meadow.jpg"));
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
    ui->stackWidget->setCurrentIndex(1);
}

// PURPOSE SCREEN METHODS
/**
 * @brief Moves user from purposeScreen to instructionScreen.
 */
void View::on_buttonToInstrScreen_clicked()
{
    ui->stackWidget->setCurrentIndex(2);
}

// INSTRUCTION SCREEN METHODS
/**
 * @brief Moves user from instructionScreen to gameScreen.
 */
void View::on_buttonToGameScreen_clicked()
{
    ui->stackWidget->setCurrentIndex(3);
}

// GAME SCREEN METHODS

// LOADING SCREEN METHODS

// CONCLUDING SCREEN METHODS






