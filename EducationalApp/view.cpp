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

    // Image importing for Conclusion Screen
    ui->conclusionBackgroundLabel->setScaledContents(true);
    ui->conclusionBackgroundLabel->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    ui->conclusionBackgroundLabel->setPixmap(QPixmap(":/images/images/Concluding_Screen_Image.jpg"));

    // Setting content for conclusion screen.
    ui->congratLabel->setScaledContents(true);
    ui->congratLabel->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    ui->congratLabel->setPixmap(QPixmap(":/images/images/CongratsImage.png"));

    // Setting the clickable link on the conclusion screen.
    ui->learnMoreLink->setText("<a href=\"https://www.epa.gov/recycle/how-do-i-recycle-common-recyclables/\">Click Here!</a>");
    ui->learnMoreLink->setTextFormat(Qt::RichText);
    ui->learnMoreLink->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->learnMoreLink->setOpenExternalLinks(true);
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
    QTimer::singleShot(1500, ui->stackWidget, [this]() { ui->stackWidget->setCurrentIndex(3); });
}

void View::on_itemSlot0_pressed()
{
    emit sendSelectedItem(0);
}

void View::on_itemSlot1_pressed()
{
    emit sendSelectedItem(1);
}

void View::on_itemSlot2_pressed()
{
    emit sendSelectedItem(2);
}

void View::on_itemSlot3_pressed()
{
    emit sendSelectedItem(3);
}

void View::on_itemSlot4_pressed()
{
    emit sendSelectedItem(4);
}

void View::mouseReleaseEvent(QMouseEvent *event)
{
    QPointF position = event->position();
    emit mouseReleased(position);
}

void View::mouseMoveEvent(QMouseEvent *event) {}

void View::trashInBin(bool correctlyIdentified)
{
    if (correctlyIdentified) {
        ui->correctLabel->setStyleSheet("color: rgb(63, 191, 4)");
        ui->correctLabel->setText("Correct!");
    } else {
        ui->correctLabel->setStyleSheet("color: rgb(221, 80, 38)");
        ui->correctLabel->setText("Incorrect!");
    }
}

void View::receiveItemInfo(int itemType, QString itemName, QString itemDescrip)
{
    ui->itemTitleLabel->setText(itemName);
    ui->sideBarLabel->setText(itemDescrip); // TODO just display this after user disposes of trash, then start timer? Or just have it up until the next item is selected
    ui->itemImageLabel->setPixmap(
        QPixmap(":/images/images/TrashImages/" + itemName + ".png")); // TODO have itemName mage file name!
    ui->itemImageLabel->setScaledContents(true); // TODO can this line go in the form?
    // TODO update correct/incorrect label when the user drags the image to the bin
}

void View::receiveItemBar(std::vector<QString> items)
{
    ui->itemSlot0->setIcon(QPixmap(":/images/images/TrashImages/" + items[0] + ".png"));
    ui->itemSlot0->setIconSize(QSize(70, 70));

    ui->itemSlot1->setIcon(QPixmap(":/images/images/TrashImages/" + items[1] + ".png"));
    ui->itemSlot1->setIconSize(QSize(70, 70));

    ui->itemSlot2->setIcon(QPixmap(":/images/images/TrashImages/" + items[2] + ".png"));
    ui->itemSlot2->setIconSize(QSize(70, 70));

    ui->itemSlot3->setIcon(QPixmap(":/images/images/TrashImages/" + items[3] + ".png"));
    ui->itemSlot3->setIconSize(QSize(70, 70));

    ui->itemSlot4->setIcon(QPixmap(":/images/images/TrashImages/" + items[4] + ".png"));
    ui->itemSlot4->setIconSize(QSize(70, 70));
}

void View::changeScreen(int screen)
{
    ui->stackWidget->setCurrentIndex(screen);
    if (screen == 4) {
        emit firstLoadScreenStart();
        QTimer::singleShot(5000, ui->stackWidget, [this]() { ui->stackWidget->setCurrentIndex(3); });
    }
    if (screen == 5) {
        //QTimer::singleShot(1500, ui->stackWidget, [this]() { ui->stackWidget->setCurrentIndex(3); });
    }
}

// LOADING SCREEN METHODS
void View::setLogoPosition(int xPosition, int yPosition)
{
    ui->recycleLogo->setGeometry(xPosition, yPosition, 200, 200);
}

// CONCLUDING SCREEN METHODS
void View::on_conclusionButton_clicked()
{
    ui->stackWidget->setCurrentIndex(6);
}
