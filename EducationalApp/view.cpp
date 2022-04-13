#include "view.h"
#include "ui_view.h"
#include <QDebug>
View::View(QWidget *parent)
    : QMainWindow(parent)
      , ui(new Ui::View)
{
    ui->setupUi(this);
    QPixmap pixmap("/Users/vista/Desktop/frog.png");
    ui->instructionPictureLabel->setScaledContents(true);
    ui->instructionPictureLabel->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->instructionPictureLabel->setPixmap(pixmap);
    ui->instructionFrame->setAutoFillBackground(false);

    ui->instructionScreen->setStyleSheet("QWidget#instructionScreen {background-color: rgb(211, 253, 255); background-image: url(/Users/vista/Desktop/meadow6.png) 0 0 0 0 stretch stretch;background-repeat: no-repeat;}");


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

/**
 * @brief Moves user from instructionScreen back to the purposeScreen
 */
//void View::on_buttonToPurposeScreen_clicked()
//{
//    ui->stackWidget->setCurrentIndex(1);
//}

// GAME SCREEN METHODS

// LOADING SCREEN METHODS

// CONCLUDING SCREEN METHODS
