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
    QWidget *instructionScreen;
    QPushButton *buttonToGameScreen;
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
        buttonToInstrScreen->setGeometry(QRect(600, 520, 80, 18));
        stackWidget->addWidget(purposeScreen);
        instructionScreen = new QWidget();
        instructionScreen->setObjectName(QString::fromUtf8("instructionScreen"));
        buttonToGameScreen = new QPushButton(instructionScreen);
        buttonToGameScreen->setObjectName(QString::fromUtf8("buttonToGameScreen"));
        buttonToGameScreen->setGeometry(QRect(600, 520, 80, 18));
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
        menubar->setGeometry(QRect(0, 0, 800, 17));
        View->setMenuBar(menubar);
        statusbar = new QStatusBar(View);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        View->setStatusBar(statusbar);

        retranslateUi(View);

        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "View", nullptr));
        startButton->setText(QCoreApplication::translate("View", "Start", nullptr));
        buttonToInstrScreen->setText(QCoreApplication::translate("View", "Continue", nullptr));
        buttonToGameScreen->setText(QCoreApplication::translate("View", "Continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
