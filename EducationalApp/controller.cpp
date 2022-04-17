#include "controller.h"

Controller::Controller(QObject *parent) : QObject{parent} {}

Controller::Controller(View *view, Model *model)
{
    this->view = view;
    this->model = model;
    generalConnections();
    gameScreenConnections();
}

// GENERAL METHODS
void Controller::generalConnections()
{
    connect(view, &View::currentPageChanged, model, &Model::pageChanged);
}
// TITLE SCREEN METHODS

// PURPOSE SCREEN METHODS

// INSTRUCTION SCREEN METHODS

// GAME SCREEN METHODS
void Controller::gameScreenConnections()
{
    connect(view, &View::mouseReleased, model, &Model::mouseReleased);
}
// LOADING SCREEN METHODS

// CONCLUDING SCREEN METHODS
