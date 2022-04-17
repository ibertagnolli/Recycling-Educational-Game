/**
 * 4 Weeks To Go
 * CS 3505 - Spring 2022
 * Assignment 8 - Learn to Recycle
 */

#include "view.h"
#include "ui_view.h"
#include <iostream>
#include <QMouseEvent>
#include <QTimer>

View::View(QWidget *parent)
    : QMainWindow(parent)
      , ui(new Ui::View)
{
    ui->setupUi(this);
    QPixmap pixmap(":/images/images/frog.png");
    ui->instructionPictureLabel->setScaledContents(true);
    ui->instructionPictureLabel->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->instructionPictureLabel->setPixmap(pixmap);
    ui->instructionFrame->setAutoFillBackground(false);

    ui->instructionScreen->setStyleSheet("QWidget#instructionScreen {background-color: rgb(211, 253, 255); background-image: url(:/images/images/meadow6.png) 0 0 0 0 stretch stretch;background-repeat: no-repeat;}");

    // ui->titleScreen->
    ui->wizard->setPixmap(
        QPixmap(":/images/images/wizardBig.png"));
    ui->backgroundImage->setPixmap(
        QPixmap(":/images/images/meadow.jpg"));

    // Image Importing for Purpose Screen
    ui->backgroundPurposeLabel->setPixmap(QPixmap(":/images/images/purposeField1"));
    ui->blueTulipLabel->setPixmap(QPixmap(":/images/images/blueTulip1"));
    ui->orangeTulipLabel->setPixmap(QPixmap(":/images/images/orangeTulip1"));
    ui->pinkTulipLabel->setPixmap(QPixmap(":/images/images/pinkTulip1"));
    ui->yellowTulipLabel->setPixmap(QPixmap(":/images/images/yellowTulip1"));
    ui->redTulipLabel->setPixmap(QPixmap(":/images/images/redTulip1"));

    // Image Importing for First Loading Screen
    ui->recycleLogo->setPixmap(QPixmap(":/images/images/recycleLoadingBlue"));
    ui->loadingBackground1->setPixmap(QPixmap(":/images/images/firstLoadingScreen"));
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
    emit firstLoadScreenStart();
    QTimer::singleShot(5000, ui->stackWidget, [this](){ui->stackWidget->setCurrentIndex(3);});
}

void View::on_buttonToLoad2_clicked()
{
    ui->stackWidget->setCurrentIndex(5);
    QTimer::singleShot(1500, ui->stackWidget, [this](){ui->stackWidget->setCurrentIndex(3);});
}

void View::mousePressEvent(QMouseEvent *event) {}

void View::mouseReleaseEvent(QMouseEvent *event)
{
    QPointF position = event->position();
    emit mouseReleased(position);
}

void View::mouseMoveEvent(QMouseEvent *event) {}

// LOADING SCREEN METHODS
void View::setLogoPosition(int xPosition, int yPosition)
{
    ui->recycleLogo->setGeometry(xPosition, yPosition, 200, 200);
}

// CONCLUDING SCREEN METHODS






