#include "view.h"
#include "ui_view.h"
#include <QTimer>

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
//GENERAL STACK WIDGET METHODS
void View::on_stackWidget_currentChanged(int index)
{
    emit currentPageChanged(index);
}

// TITLE SCREEN METHODS

void View::on_startButton_clicked()
{
    ui->stackWidget->setCurrentIndex(1);
}

// PURPOSE SCREEN METHODS

void View::on_buttonToInstrScreen_clicked()
{
    ui->stackWidget->setCurrentIndex(2);
}

// INSTRUCTION SCREEN METHODS

void View::on_buttonToGameScreen_clicked()
{
    ui->stackWidget->setCurrentIndex(3);
}

void View::on_buttonToPurposeScreen_clicked()
{
    ui->stackWidget->setCurrentIndex(1);
}

// GAME SCREEN METHODS
void View::on_buttonToLoad1_clicked()
{
    ui->stackWidget->setCurrentIndex(4);
    QTimer::singleShot(1500, ui->stackWidget, [this](){ui->stackWidget->setCurrentIndex(3);});
}

void View::on_buttonToLoad2_clicked()
{
    ui->stackWidget->setCurrentIndex(5);
    QTimer::singleShot(1500, ui->stackWidget, [this](){ui->stackWidget->setCurrentIndex(3);});
}

// LOADING SCREEN METHODS

// CONCLUDING SCREEN METHODS






