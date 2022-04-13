/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackWidget;
    QWidget *titleScreen;
    QPushButton *startButton;
    QWidget *purposeScreen;
    QPushButton *buttonToInstrScreen;
    QLabel *purposeSubtitleLabel1;
    QLabel *purposeTitleLabel;
    QLabel *backgroungImageLabel;
    QLabel *purposeSubtitleLabel2;
    QLabel *pinkTulipLabel;
    QLabel *orangeTulipLabel;
    QLabel *blueTulipLabel;
    QLabel *redTulipLabel;
    QLabel *yellowTulipLabel;
    QLabel *waterLabel;
    QLabel *electricityLabel;
    QLabel *treeLabel;
    QLabel *gasLabel;
    QLabel *landfillLabel;
    QWidget *instructionScreen;
    QPushButton *buttonToGameScreen;
    QPushButton *buttonToPurposeScreen;
    QWidget *gameScreen;
    QWidget *loadingScreen1;
    QWidget *loadingScreen2;
    QWidget *conclusionScreen;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(800, 600);
        centralwidget = new QWidget(View);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackWidget = new QStackedWidget(centralwidget);
        stackWidget->setObjectName(QString::fromUtf8("stackWidget"));
        stackWidget->setGeometry(QRect(-1, -1, 801, 561));
        stackWidget->setAutoFillBackground(false);
        titleScreen = new QWidget();
        titleScreen->setObjectName(QString::fromUtf8("titleScreen"));
        startButton = new QPushButton(titleScreen);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(400, 520, 80, 18));
        stackWidget->addWidget(titleScreen);
        purposeScreen = new QWidget();
        purposeScreen->setObjectName(QString::fromUtf8("purposeScreen"));
        purposeScreen->setLayoutDirection(Qt::LeftToRight);
        buttonToInstrScreen = new QPushButton(purposeScreen);
        buttonToInstrScreen->setObjectName(QString::fromUtf8("buttonToInstrScreen"));
        buttonToInstrScreen->setGeometry(QRect(670, 500, 101, 41));
        QFont font;
        font.setPointSize(12);
        buttonToInstrScreen->setFont(font);
        buttonToInstrScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(4, 255, 0); color: rgb(0, 85, 0);"));
        purposeSubtitleLabel1 = new QLabel(purposeScreen);
        purposeSubtitleLabel1->setObjectName(QString::fromUtf8("purposeSubtitleLabel1"));
        purposeSubtitleLabel1->setGeometry(QRect(0, 80, 801, 51));
        QFont font1;
        font1.setPointSize(22);
        purposeSubtitleLabel1->setFont(font1);
        purposeSubtitleLabel1->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        purposeSubtitleLabel1->setAlignment(Qt::AlignCenter);
        purposeSubtitleLabel1->setWordWrap(true);
        purposeTitleLabel = new QLabel(purposeScreen);
        purposeTitleLabel->setObjectName(QString::fromUtf8("purposeTitleLabel"));
        purposeTitleLabel->setGeometry(QRect(0, 40, 801, 51));
        QFont font2;
        font2.setPointSize(30);
        purposeTitleLabel->setFont(font2);
        purposeTitleLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        purposeTitleLabel->setAlignment(Qt::AlignCenter);
        backgroungImageLabel = new QLabel(purposeScreen);
        backgroungImageLabel->setObjectName(QString::fromUtf8("backgroungImageLabel"));
        backgroungImageLabel->setGeometry(QRect(0, 0, 626, 417));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backgroungImageLabel->sizePolicy().hasHeightForWidth());
        backgroungImageLabel->setSizePolicy(sizePolicy);
        backgroungImageLabel->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/purposeField1.jpg")));
        backgroungImageLabel->setScaledContents(true);
        purposeSubtitleLabel2 = new QLabel(purposeScreen);
        purposeSubtitleLabel2->setObjectName(QString::fromUtf8("purposeSubtitleLabel2"));
        purposeSubtitleLabel2->setGeometry(QRect(0, 120, 801, 41));
        purposeSubtitleLabel2->setFont(font1);
        purposeSubtitleLabel2->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        purposeSubtitleLabel2->setAlignment(Qt::AlignCenter);
        purposeSubtitleLabel2->setWordWrap(true);
        pinkTulipLabel = new QLabel(purposeScreen);
        pinkTulipLabel->setObjectName(QString::fromUtf8("pinkTulipLabel"));
        pinkTulipLabel->setGeometry(QRect(180, 90, 431, 481));
        pinkTulipLabel->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/pinkTulip1.png")));
        pinkTulipLabel->setScaledContents(true);
        orangeTulipLabel = new QLabel(purposeScreen);
        orangeTulipLabel->setObjectName(QString::fromUtf8("orangeTulipLabel"));
        orangeTulipLabel->setGeometry(QRect(70, 260, 401, 401));
        orangeTulipLabel->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/orangeTulip1.png")));
        orangeTulipLabel->setScaledContents(true);
        blueTulipLabel = new QLabel(purposeScreen);
        blueTulipLabel->setObjectName(QString::fromUtf8("blueTulipLabel"));
        blueTulipLabel->setGeometry(QRect(-80, 160, 391, 421));
        blueTulipLabel->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/blueTulip1.png")));
        blueTulipLabel->setScaledContents(true);
        redTulipLabel = new QLabel(purposeScreen);
        redTulipLabel->setObjectName(QString::fromUtf8("redTulipLabel"));
        redTulipLabel->setGeometry(QRect(500, 110, 421, 461));
        redTulipLabel->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/redTulip1.png")));
        redTulipLabel->setScaledContents(true);
        yellowTulipLabel = new QLabel(purposeScreen);
        yellowTulipLabel->setObjectName(QString::fromUtf8("yellowTulipLabel"));
        yellowTulipLabel->setGeometry(QRect(350, 210, 401, 411));
        yellowTulipLabel->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/yellowTulip1.png")));
        yellowTulipLabel->setScaledContents(true);
        waterLabel = new QLabel(purposeScreen);
        waterLabel->setObjectName(QString::fromUtf8("waterLabel"));
        waterLabel->setGeometry(QRect(30, 290, 141, 111));
        QFont font3;
        font3.setPointSize(14);
        waterLabel->setFont(font3);
        waterLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        waterLabel->setAlignment(Qt::AlignCenter);
        waterLabel->setWordWrap(true);
        electricityLabel = new QLabel(purposeScreen);
        electricityLabel->setObjectName(QString::fromUtf8("electricityLabel"));
        electricityLabel->setGeometry(QRect(460, 350, 151, 71));
        electricityLabel->setFont(font3);
        electricityLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        electricityLabel->setAlignment(Qt::AlignCenter);
        electricityLabel->setWordWrap(true);
        treeLabel = new QLabel(purposeScreen);
        treeLabel->setObjectName(QString::fromUtf8("treeLabel"));
        treeLabel->setGeometry(QRect(190, 370, 121, 111));
        treeLabel->setFont(font3);
        treeLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        treeLabel->setAlignment(Qt::AlignCenter);
        treeLabel->setWordWrap(true);
        gasLabel = new QLabel(purposeScreen);
        gasLabel->setObjectName(QString::fromUtf8("gasLabel"));
        gasLabel->setGeometry(QRect(300, 240, 161, 111));
        gasLabel->setFont(font3);
        gasLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        gasLabel->setAlignment(Qt::AlignCenter);
        gasLabel->setWordWrap(true);
        landfillLabel = new QLabel(purposeScreen);
        landfillLabel->setObjectName(QString::fromUtf8("landfillLabel"));
        landfillLabel->setGeometry(QRect(620, 220, 161, 151));
        landfillLabel->setFont(font3);
        landfillLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        landfillLabel->setAlignment(Qt::AlignCenter);
        landfillLabel->setWordWrap(true);
        stackWidget->addWidget(purposeScreen);
        backgroungImageLabel->raise();
        purposeSubtitleLabel1->raise();
        purposeTitleLabel->raise();
        purposeSubtitleLabel2->raise();
        pinkTulipLabel->raise();
        orangeTulipLabel->raise();
        blueTulipLabel->raise();
        redTulipLabel->raise();
        yellowTulipLabel->raise();
        waterLabel->raise();
        electricityLabel->raise();
        buttonToInstrScreen->raise();
        treeLabel->raise();
        gasLabel->raise();
        landfillLabel->raise();
        instructionScreen = new QWidget();
        instructionScreen->setObjectName(QString::fromUtf8("instructionScreen"));
        buttonToGameScreen = new QPushButton(instructionScreen);
        buttonToGameScreen->setObjectName(QString::fromUtf8("buttonToGameScreen"));
        buttonToGameScreen->setGeometry(QRect(670, 500, 81, 31));
        buttonToPurposeScreen = new QPushButton(instructionScreen);
        buttonToPurposeScreen->setObjectName(QString::fromUtf8("buttonToPurposeScreen"));
        buttonToPurposeScreen->setGeometry(QRect(40, 500, 100, 32));
        stackWidget->addWidget(instructionScreen);
        gameScreen = new QWidget();
        gameScreen->setObjectName(QString::fromUtf8("gameScreen"));
        stackWidget->addWidget(gameScreen);
        loadingScreen1 = new QWidget();
        loadingScreen1->setObjectName(QString::fromUtf8("loadingScreen1"));
        stackWidget->addWidget(loadingScreen1);
        loadingScreen2 = new QWidget();
        loadingScreen2->setObjectName(QString::fromUtf8("loadingScreen2"));
        stackWidget->addWidget(loadingScreen2);
        conclusionScreen = new QWidget();
        conclusionScreen->setObjectName(QString::fromUtf8("conclusionScreen"));
        stackWidget->addWidget(conclusionScreen);
        View->setCentralWidget(centralwidget);
        menubar = new QMenuBar(View);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        View->setMenuBar(menubar);
        statusbar = new QStatusBar(View);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        View->setStatusBar(statusbar);

        retranslateUi(View);

        stackWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "View", nullptr));
        startButton->setText(QCoreApplication::translate("View", "Start", nullptr));
        buttonToInstrScreen->setText(QCoreApplication::translate("View", "Continue", nullptr));
        purposeSubtitleLabel1->setText(QCoreApplication::translate("View", "Saves Resources and Reduces Pollution", nullptr));
        purposeTitleLabel->setText(QCoreApplication::translate("View", "Recycling Matters", nullptr));
        backgroungImageLabel->setText(QString());
        purposeSubtitleLabel2->setText(QCoreApplication::translate("View", "In June 2019, Salt Lake City recycled and saved:", nullptr));
        pinkTulipLabel->setText(QString());
        orangeTulipLabel->setText(QString());
        blueTulipLabel->setText(QString());
        redTulipLabel->setText(QString());
        yellowTulipLabel->setText(QString());
        waterLabel->setText(QCoreApplication::translate("View", "3,121,890                                  Gallons of Water", nullptr));
        electricityLabel->setText(QCoreApplication::translate("View", "1,832                                            MWH of Electricity", nullptr));
        treeLabel->setText(QCoreApplication::translate("View", "5,732                                              Mature Trees", nullptr));
        gasLabel->setText(QCoreApplication::translate("View", "2,027                                    Metric Tons of                                Greenhouse Gas Emissions", nullptr));
        landfillLabel->setText(QCoreApplication::translate("View", "2,238                                 Cubic Yards of                         Landfill Airspace", nullptr));
        buttonToGameScreen->setText(QCoreApplication::translate("View", "Continue", nullptr));
        buttonToPurposeScreen->setText(QCoreApplication::translate("View", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
