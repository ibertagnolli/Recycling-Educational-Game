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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackWidget;
    QWidget *titleScreen;
    QPushButton *startButton;
    QLabel *titleLabel;
    QLabel *wizard;
    QLabel *backgroundImage;
    QLabel *flavorTextLabel;
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
    QFrame *instructionFrame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *instructionPictureLabel;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *HowToPlayLabel;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QPushButton *buttonToPurposeScreen;
    QPushButton *buttonToGameScreen;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
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
        View->setMinimumSize(QSize(800, 600));
        View->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(View);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stackWidget = new QStackedWidget(centralwidget);
        stackWidget->setObjectName(QString::fromUtf8("stackWidget"));
        titleScreen = new QWidget();
        titleScreen->setObjectName(QString::fromUtf8("titleScreen"));
        titleScreen->setStyleSheet(QString::fromUtf8("background-image: {/Users/isabellabertagnolli/a8-Edu-app/a8-edu-app-ibertagnolli/meadow.png;}"));
        startButton = new QPushButton(titleScreen);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(490, 160, 241, 61));
        QFont font;
        font.setPointSize(45);
        font.setBold(true);
        startButton->setFont(font);
        startButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(63, 191, 4);border-style: solid;border-color: rgb(94, 110, 71);border-width: 2px; border-radius:10px; color: rgb(255, 255, 255)} QPushButton:pressed {background-color: rgb(230, 249, 193);border-style: solid;border-color: rgb(94, 110, 71);border-width: 2px;border-radius:10px; color: rgb(0, 0, 0)}"));
        titleLabel = new QLabel(titleScreen);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(400, 50, 411, 101));
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("color:rgb(2, 115, 51)"));
        titleLabel->setAlignment(Qt::AlignCenter);
        wizard = new QLabel(titleScreen);
        wizard->setObjectName(QString::fromUtf8("wizard"));
        wizard->setGeometry(QRect(360, 160, 531, 541));
        QFont font1;
        wizard->setFont(font1);
        wizard->setStyleSheet(QString::fromUtf8(""));
        wizard->setFrameShape(QFrame::NoFrame);
        wizard->setPixmap(QPixmap(QString::fromUtf8("../wizard.png")));
        wizard->setScaledContents(true);
        wizard->setAlignment(Qt::AlignCenter);
        backgroundImage = new QLabel(titleScreen);
        backgroundImage->setObjectName(QString::fromUtf8("backgroundImage"));
        backgroundImage->setGeometry(QRect(10, 10, 791, 571));
        backgroundImage->setAutoFillBackground(false);
        backgroundImage->setScaledContents(true);
        flavorTextLabel = new QLabel(titleScreen);
        flavorTextLabel->setObjectName(QString::fromUtf8("flavorTextLabel"));
        flavorTextLabel->setGeometry(QRect(250, 310, 161, 16));
        flavorTextLabel->setFont(font1);
        flavorTextLabel->setStyleSheet(QString::fromUtf8("color:rgb(63, 191, 4)"));
        flavorTextLabel->setAlignment(Qt::AlignCenter);
        stackWidget->addWidget(titleScreen);
        backgroundImage->raise();
        wizard->raise();
        startButton->raise();
        titleLabel->raise();
        flavorTextLabel->raise();
        purposeScreen = new QWidget();
        purposeScreen->setObjectName(QString::fromUtf8("purposeScreen"));
        purposeScreen->setMinimumSize(QSize(800, 600));
        purposeScreen->setMaximumSize(QSize(800, 600));
        purposeScreen->setLayoutDirection(Qt::LeftToRight);
        buttonToInstrScreen = new QPushButton(purposeScreen);
        buttonToInstrScreen->setObjectName(QString::fromUtf8("buttonToInstrScreen"));
        buttonToInstrScreen->setGeometry(QRect(670, 500, 101, 41));
        QFont font2;
        font2.setPointSize(12);
        buttonToInstrScreen->setFont(font2);
        buttonToInstrScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(4, 255, 0); color: rgb(0, 85, 0);"));
        purposeSubtitleLabel1 = new QLabel(purposeScreen);
        purposeSubtitleLabel1->setObjectName(QString::fromUtf8("purposeSubtitleLabel1"));
        purposeSubtitleLabel1->setGeometry(QRect(0, 80, 801, 51));
        QFont font3;
        font3.setPointSize(22);
        purposeSubtitleLabel1->setFont(font3);
        purposeSubtitleLabel1->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        purposeSubtitleLabel1->setAlignment(Qt::AlignCenter);
        purposeSubtitleLabel1->setWordWrap(true);
        purposeTitleLabel = new QLabel(purposeScreen);
        purposeTitleLabel->setObjectName(QString::fromUtf8("purposeTitleLabel"));
        purposeTitleLabel->setGeometry(QRect(0, 40, 801, 51));
        QFont font4;
        font4.setPointSize(30);
        purposeTitleLabel->setFont(font4);
        purposeTitleLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        purposeTitleLabel->setAlignment(Qt::AlignCenter);
        backgroungImageLabel = new QLabel(purposeScreen);
        backgroungImageLabel->setObjectName(QString::fromUtf8("backgroungImageLabel"));
        backgroungImageLabel->setGeometry(QRect(0, 0, 811, 571));
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
        purposeSubtitleLabel2->setFont(font3);
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
        QFont font5;
        font5.setPointSize(14);
        waterLabel->setFont(font5);
        waterLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        waterLabel->setAlignment(Qt::AlignCenter);
        waterLabel->setWordWrap(true);
        electricityLabel = new QLabel(purposeScreen);
        electricityLabel->setObjectName(QString::fromUtf8("electricityLabel"));
        electricityLabel->setGeometry(QRect(460, 350, 151, 71));
        electricityLabel->setFont(font5);
        electricityLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        electricityLabel->setAlignment(Qt::AlignCenter);
        electricityLabel->setWordWrap(true);
        treeLabel = new QLabel(purposeScreen);
        treeLabel->setObjectName(QString::fromUtf8("treeLabel"));
        treeLabel->setGeometry(QRect(190, 370, 121, 111));
        treeLabel->setFont(font5);
        treeLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        treeLabel->setAlignment(Qt::AlignCenter);
        treeLabel->setWordWrap(true);
        gasLabel = new QLabel(purposeScreen);
        gasLabel->setObjectName(QString::fromUtf8("gasLabel"));
        gasLabel->setGeometry(QRect(300, 240, 161, 111));
        gasLabel->setFont(font5);
        gasLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        gasLabel->setAlignment(Qt::AlignCenter);
        gasLabel->setWordWrap(true);
        landfillLabel = new QLabel(purposeScreen);
        landfillLabel->setObjectName(QString::fromUtf8("landfillLabel"));
        landfillLabel->setGeometry(QRect(620, 220, 161, 151));
        landfillLabel->setFont(font5);
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
        instructionScreen->setMinimumSize(QSize(800, 600));
        instructionScreen->setMaximumSize(QSize(800, 600));
        instructionScreen->setAutoFillBackground(false);
        instructionScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 253, 255);\n"
""));
        instructionFrame = new QFrame(instructionScreen);
        instructionFrame->setObjectName(QString::fromUtf8("instructionFrame"));
        instructionFrame->setGeometry(QRect(10, 10, 761, 511));
        instructionFrame->setStyleSheet(QString::fromUtf8(""));
        instructionFrame->setFrameShape(QFrame::StyledPanel);
        instructionFrame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(instructionFrame);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 751, 501));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        instructionPictureLabel = new QLabel(horizontalLayoutWidget);
        instructionPictureLabel->setObjectName(QString::fromUtf8("instructionPictureLabel"));
        instructionPictureLabel->setMaximumSize(QSize(350, 16777215));
        instructionPictureLabel->setStyleSheet(QString::fromUtf8("background-image: url(\":/images/images/frog.png\");\n"
"background-color: rgba( 255, 255, 255, 0%);"));

        horizontalLayout->addWidget(instructionPictureLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Helvetica\";\n"
"color: rgb(0, 0, 0);"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 8, 1, 1, 1);

        HowToPlayLabel = new QLabel(horizontalLayoutWidget);
        HowToPlayLabel->setObjectName(QString::fromUtf8("HowToPlayLabel"));
        HowToPlayLabel->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Georgia\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba( 255, 255, 255, 0%);"));
        HowToPlayLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(HowToPlayLabel, 0, 1, 1, 1);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 40));
        label_5->setStyleSheet(QString::fromUtf8("font: 16pt \"Helvetica\";\n"
"color: rgb(0, 0, 0);\n"
""));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 7, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(horizontalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(10, 16777215));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgba( 255, 255, 255, 0%);"));

        horizontalLayout_2->addWidget(label_8);

        buttonToPurposeScreen = new QPushButton(horizontalLayoutWidget);
        buttonToPurposeScreen->setObjectName(QString::fromUtf8("buttonToPurposeScreen"));
        buttonToPurposeScreen->setMaximumSize(QSize(100, 40));
        buttonToPurposeScreen->setStyleSheet(QString::fromUtf8("color: rgb(46, 138, 3);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(128, 242, 46);"));

        horizontalLayout_2->addWidget(buttonToPurposeScreen);

        buttonToGameScreen = new QPushButton(horizontalLayoutWidget);
        buttonToGameScreen->setObjectName(QString::fromUtf8("buttonToGameScreen"));
        buttonToGameScreen->setMaximumSize(QSize(100, 40));
        buttonToGameScreen->setStyleSheet(QString::fromUtf8("color: rgb(46, 138, 3);\n"
"background-color: rgb(128, 242, 46);\n"
"border-color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(buttonToGameScreen);

        label_9 = new QLabel(horizontalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(10, 16777215));

        horizontalLayout_2->addWidget(label_9);


        gridLayout->addLayout(horizontalLayout_2, 10, 1, 1, 1);

        label_7 = new QLabel(horizontalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 9, 1, 1, 1);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 40));
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"Helvetica\";\n"
"color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 5, 1, 1, 1);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Helvetica\";\n"
"color: rgb(0, 0, 0);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 40));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Helvetica\";\n"
"color: rgb(0, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Helvetica\";\n"
"color: rgb(0, 0, 0);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 6, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

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

        verticalLayout_2->addWidget(stackWidget);

        View->setCentralWidget(centralwidget);
        menubar = new QMenuBar(View);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        View->setMenuBar(menubar);
        statusbar = new QStatusBar(View);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        View->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
#endif // QT_CONFIG(shortcut)

        retranslateUi(View);

        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "View", nullptr));
        startButton->setText(QCoreApplication::translate("View", "Start", nullptr));
        titleLabel->setText(QCoreApplication::translate("View", "Don't Be Trashy!", nullptr));
        wizard->setText(QString());
        backgroundImage->setText(QCoreApplication::translate("View", "TextLabel", nullptr));
        flavorTextLabel->setText(QCoreApplication::translate("View", "Make Recycling Magical!", nullptr));
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
        instructionPictureLabel->setText(QString());
        label_6->setText(QCoreApplication::translate("View", "Advance to the next level by \n"
"placing all trash items into the correct bin.", nullptr));
        HowToPlayLabel->setText(QCoreApplication::translate("View", "How To Play", nullptr));
        label_5->setText(QCoreApplication::translate("View", "Level Advancement", nullptr));
        label_8->setText(QString());
        buttonToPurposeScreen->setText(QCoreApplication::translate("View", "Back", nullptr));
        buttonToGameScreen->setText(QCoreApplication::translate("View", "Continue", nullptr));
        label_9->setText(QString());
        label_7->setText(QString());
        label->setText(QCoreApplication::translate("View", "Placement of Bins", nullptr));
        label_3->setText(QCoreApplication::translate("View", "Place all trash items into \n"
"their correct bins.", nullptr));
        label_2->setText(QCoreApplication::translate("View", "Goal", nullptr));
        label_4->setText(QCoreApplication::translate("View", "Click on the trash item and drag it to \n"
"their correct bin.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
