/**
 * 4 Weeks To Go
 * CS 3505 - Spring 2022
 * Assignment 8 - Learn to Recycle
 */

#include "controller.h"
#include "model.h"
#include "view.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    View view;
    Model model;
    Controller controller(&view, &model);




    view.show();
    return a.exec();
}
