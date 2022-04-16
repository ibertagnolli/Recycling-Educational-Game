#include "controller.h"

Controller::Controller(QObject *parent) : QObject{parent} {}

Controller::Controller(View *view, Model *model)
{
    this->view = view;
    this->model = model;
    generalConnections();
    firstLoadingScreenConnections();
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

// LOADING SCREEN METHODS
void Controller::firstLoadingScreenConnections()
{
    connect(view, &View::firstLoadScreenStart, model, &Model::setupWorld);
    connect(model, &Model::updateLabelPosition, view, &View::setLabelPosition);
}

// CONCLUDING SCREEN METHODS
