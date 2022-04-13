#include "model.h"
#include <iostream>

Model::Model(QObject *parent) : QObject{parent} {}

//GENERAL METHODS
void Model::pageChanged(int index)
{
    std::cout << "current index: " << index << std::endl;
}

// TITLE SCREEN METHODS

// PURPOSE SCREEN METHODS

// INSTRUCTION SCREEN METHODS

// GAME SCREEN METHODS

// LOADING SCREEN METHODS

// CONCLUDING SCREEN METHODS
