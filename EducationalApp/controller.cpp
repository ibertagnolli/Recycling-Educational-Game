/**
 * 4 Weeks To Go
 * CS 3505 - Spring 2022
 * Assignment 8 - Learn to Recycle
 */

#include "controller.h"

Controller::Controller(QObject *parent) : QObject{parent} {}

Controller::Controller(View *view, Model *model)
{
    this->view = view;
    this->model = model;
    generalConnections();
    gameScreenConnections();
    firstLoadingScreenConnections();
}

// GENERAL METHODS
void Controller::generalConnections()
{
    connect(view, &View::currentPageChanged, model, &Model::updateScreenIndex);
}
// TITLE SCREEN METHODS

// PURPOSE SCREEN METHODS

// INSTRUCTION SCREEN METHODS

// GAME SCREEN METHODS
void Controller::gameScreenConnections()
{
    connect(view, &View::mouseReleased, model, &Model::mouseReleased);    
    connect(model, &Model::trashInBin, view, &View::trashInBin);
    connect(model, &Model::sendFiveBarItems, view, &View::receiveItemBar);
    connect(model, &Model::changeScreen, view, &View::changeScreen);

    connect(view, &View::sendSelectedItem, model, &Model::receiveSelectedItem);
    connect(model, &Model::sendItemInfoToWindow, view, &View::receiveItemInfo);

}
// LOADING SCREEN METHODS
void Controller::firstLoadingScreenConnections()
{
    connect(view, &View::firstLoadScreenStart, model, &Model::setupFirstLoadingWorld);
    connect(model, &Model::updateLabelPosition, view, &View::setLogoPosition);
}

// CONCLUDING SCREEN METHODS
