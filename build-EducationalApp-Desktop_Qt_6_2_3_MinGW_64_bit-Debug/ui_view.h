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
    QWidget *purposeScreen;
    QPushButton *buttonToInstrScreen;
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
        startButton = new QPushButton(titleScreen);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(400, 520, 80, 18));
        stackWidget->addWidget(titleScreen);
        purposeScreen = new QWidget();
        purposeScreen->setObjectName(QString::fromUtf8("purposeScreen"));
        buttonToInstrScreen = new QPushButton(purposeScreen);
        buttonToInstrScreen->setObjectName(QString::fromUtf8("buttonToInstrScreen"));
        buttonToInstrScreen->setGeometry(QRect(680, 510, 91, 31));
        stackWidget->addWidget(purposeScreen);
        instructionScreen = new QWidget();
        instructionScreen->setObjectName(QString::fromUtf8("instructionScreen"));
        instructionScreen->setMinimumSize(QSize(778, 528));
        instructionScreen->setMaximumSize(QSize(778, 528));
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
        instructionPictureLabel->setStyleSheet(QString::fromUtf8("background-image: url(\"/Users/vista/Desktop/frog.png\");\n"
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

        retranslateUi(View);

        stackWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "View", nullptr));
        startButton->setText(QCoreApplication::translate("View", "Start", nullptr));
        buttonToInstrScreen->setText(QCoreApplication::translate("View", "Continue", nullptr));
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
