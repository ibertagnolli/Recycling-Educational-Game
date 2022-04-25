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
#include <QPoint>

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
    ui->itemTitleLabel->setWordWrap(true);

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

    // Sets flower labels on Purpose Screen invisible to start.
    ui->waterLabel->setVisible(false);
    ui->treeLabel->setVisible(false);
    ui->gasLabel->setVisible(false);
    ui->electricityLabel->setVisible(false);
    ui->landfillLabel->setVisible(false);
    ui->buttonToInstrScreen->setVisible(false);

    // Image setup for First Loading Screen
    ui->recycleLogo->setPixmap(QPixmap(":/images/images/recycleLoadingBlue"));
    ui->loadingBackground1->setPixmap(QPixmap(":/images/images/firstLoadingScreen"));

    // Image setup for Second Loading Screen
    truckBackground = QImage(":/images/images/truck").scaled(800, 600);
    ballImage = QImage(":/images/images/recycleBall").scaled(50, 50);
    numBalls = 20;

    // Image importing for Conclusion Screen
    ui->conclusionBackgroundLabel->setScaledContents(true);
    ui->conclusionBackgroundLabel->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    ui->conclusionBackgroundLabel->setPixmap(QPixmap(":/images/images/Concluding_Screen_Image.jpg"));

    // Setting content for conclusion screen.
    ui->congratLabel->setScaledContents(true);
    ui->congratLabel->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    ui->congratLabel->setPixmap(QPixmap(":/images/images/congratsWizard.png"));

    // Setting the clickable link on the conclusion screen.
    ui->learnMoreLink->setText("<a href=\"https://www.epa.gov/recycle/how-do-i-recycle-common-recyclables/\">Click Here!</a>");
    ui->learnMoreLink->setTextFormat(Qt::RichText);
    ui->learnMoreLink->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->learnMoreLink->setOpenExternalLinks(true);


    itemPressed = false;
    ui->TestLabel->setMouseTracking(true);
    ui->TestLabel->hide();

    ui->buttonToInstrScreen->setDisabled(true);
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
    std::vector trashLabel{ui->trashBinLabel->x(), ui->trashBinLabel->y(),
                          ui->trashBinLabel->width(), ui->trashBinLabel->height()};
    std::vector recycleLabel{ui->recycleBinLabel->x(), ui->recycleBinLabel->y(),
                            ui->recycleBinLabel->width(), ui->recycleBinLabel->height()};
    std::vector otherBin{ui->yardBinLabel->x(), ui->yardBinLabel->y(),
                        ui->yardBinLabel->width(), ui->yardBinLabel->height()};
    emit sendLabelPositions(trashLabel, recycleLabel, otherBin);
}

void View::on_buttonToPurposeScreen_clicked()
{
    ui->stackWidget->setCurrentIndex(1);
}

// GAME SCREEN METHODS
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

void View::setLabelBackground(QImage image){
    this->grabMouse();
    itemPressed = true;
    QPixmap map;
    map.convertFromImage(image.scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation),Qt::ColorOnly);
    ui->TestLabel->setGeometry(0,0,72,72);
    ui->TestLabel->setPixmap(map);
    ui->TestLabel->setScaledContents(true);
}

void View::mouseReleaseEvent(QMouseEvent *event)
{
    itemPressed = false;
    ui->TestLabel->hide();
    QPointF position = event->position();
    emit mouseReleased(position);
    this->releaseMouse();

    QTimer::singleShot(700, this, [this]() {
        ui->itemImageLabel->clear();
        ui->sideBarLabel->clear();
        ui->itemTitleLabel->clear();
        ui->correctLabel->clear();
    });
}


void View::mouseMoveEvent(QMouseEvent *event) {
    if(itemPressed) {
        ui->TestLabel->move((int)event->position().x()-71/2, (int)event->position().y()-71/2);
        ui->TestLabel->show();
    }
}

void View::trashInBin(bool correctlyIdentified)
{
    if (correctlyIdentified) {
        ui->correctLabel->setStyleSheet("color: rgb(52, 163, 3)");
        ui->correctLabel->setText("Correct!");
    } else {
        ui->correctLabel->setStyleSheet("color: rgb(221, 80, 38)");
        ui->correctLabel->setText("Incorrect!");
    }
}

void View::receiveItemInfo(int itemType, QString itemName, QString itemDescrip, QImage image)
{
    ui->itemTitleLabel->setText(itemName);
    ui->sideBarLabel->setText(itemDescrip);
    QPixmap map;
    map.convertFromImage(image.scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation),Qt::ColorOnly);
    ui->itemImageLabel->setPixmap(map);
    ui->itemImageLabel->setScaledContents(true);
}

void View::receiveItemBar(std::vector<QImage *> items)
{
    QPixmap map;
    ui->itemSlot0->setIcon(map.fromImage(*items[0]));
    ui->itemSlot0->setIconSize(QSize(70, 70));

    ui->itemSlot1->setIcon(map.fromImage(*items[1]));
    ui->itemSlot1->setIconSize(QSize(70, 70));

    ui->itemSlot2->setIcon(map.fromImage(*items[2]));
    ui->itemSlot2->setIconSize(QSize(70, 70));

    ui->itemSlot3->setIcon(map.fromImage(*items[3]));
    ui->itemSlot3->setIconSize(QSize(70, 70));

    ui->itemSlot4->setIcon(map.fromImage(*items[4]));
    ui->itemSlot4->setIconSize(QSize(70, 70));
}

void View::changeScreen(int screen)
{
    ui->stackWidget->setCurrentIndex(screen);
    if (screen == 4)
    {
        emit firstLoadScreenStart();
        QTimer::singleShot(5000, ui->stackWidget, [this]() { ui->stackWidget->setCurrentIndex(3); });
    }
    else if (screen == 5)
    {
        emit secondLoadScreenStart();
        QTimer::singleShot(6000, ui->stackWidget, [this]() { ui->stackWidget->setCurrentIndex(3); });
        ui->yardBinLabel->setPixmap(QPixmap(":/images/images/donationBin.png"));
        ui->yardBinLabel->setToolTip("Special donation or dropoff bin");
    }
}

// LOADING SCREEN METHODS
void View::setLogoPosition(int xPosition, int yPosition)
{
    ui->recycleLogo->setGeometry(xPosition, yPosition, 200, 200);
}

void View::paintEvent(QPaintEvent *)
{
    // Create a painter
    QPainter painter(this);

    // Only draws balls on second loading screen.
    // Prevents drawing balls on other screens.
    if(ui->stackWidget->currentIndex() == 5)
    {
        painter.drawImage(0, 0, truckBackground);
        for (int i = 0; i < numBalls; i++){
            painter.drawImage(ballPositionsVector[i]->x(), ballPositionsVector[i]->y(), ballImage);
        }
    }
    painter.end();
}

void View::updateBallPositions(std::vector<QPoint*> ballPosVector)
{
    ballPositionsVector = ballPosVector;
    // Prompts paintevent
    update();
}

// CONCLUDING SCREEN METHODS
void View::on_conclusionButton_clicked()
{
    ui->stackWidget->setCurrentIndex(5);
    emit secondLoadScreenStart();
}

//TULIP ClICKED METHODS PURPOSE SCREEN
void View::on_waterButton_clicked()
{
    ui->waterButton->setDisabled(true);
    ui->waterLabel->setVisible(true);
}

void View::on_treeButton_clicked()
{
    ui->treeButton->setDisabled(true);
    ui->treeLabel->setVisible(true);
}

void View::on_gasButton_clicked()
{
    ui->gasButton->setDisabled(true);
    ui->gasLabel->setVisible(true);
}

void View::on_electricityButton_clicked()
{
    ui->electricityButton->setDisabled(true);
    ui->electricityLabel->setVisible(true);
}

void View::on_landfillButton_clicked()
{
    ui->landfillButton->setDisabled(true);
    ui->landfillLabel->setVisible(true);
    ui->buttonToInstrScreen->setVisible(true);
    ui->buttonToInstrScreen->setEnabled(true);
}
