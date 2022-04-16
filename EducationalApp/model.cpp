#include "model.h"
#include "bins.h"
#include "trashbins.h"
#include "compostbin.h"
#include "specialbins.h"
#include "recyclebins.h"
#include <vector>
#include <iostream>

Model::Model(QObject *parent) : QObject{parent} {
    cans.push_back(new TrashBins);
    cans.push_back(new CompostBin);
    cans.push_back(new RecycleBins);
    cans.push_back(new SpecialBins);
}

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
