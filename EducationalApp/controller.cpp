/**
 * 4 Weeks To Go
 * CS 3505 - Spring 2022
 * Assignment 8 - Learn to Recycle
 */

#include "controller.h"
#include <iostream>

Controller::Controller(QObject *parent) : QObject{parent} {}

Controller::Controller(View *view, Model *model)
{
    this->view = view;
    this->model = model;
    generalConnections();
    gameScreenConnections();
    firstLoadingScreenConnections();
    secondLoadingScreenConnections();
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
    connect(model, &Model::sendItemPhoto, view, &View::setLabelBackground);
    connect(view, &View::sendLabelPositions, model, &Model::setRegions);
}
// LOADING SCREEN METHODS
void Controller::firstLoadingScreenConnections()
{
    connect(view, &View::firstLoadScreenStart, model, &Model::setupFirstLoadingWorld);
    connect(model, &Model::updateLabelPosition, view, &View::setLogoPosition);
}

void Controller::secondLoadingScreenConnections()
{
    connect(view, &View::secondLoadScreenStart, model, &Model::setupSecondLoadingWorld);
    connect(model, &Model::ballsMoved, view, &View::updateBallPositions);
}

// CONCLUDING SCREEN METHODS
