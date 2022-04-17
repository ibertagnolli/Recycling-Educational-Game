#include "model.h"
#include "bins.h"
#include "trashbins.h"
#include "compostbin.h"
#include "specialbins.h"
#include "recyclebins.h"
#include "items.h"
#include "trashitems.h"
#include "compostitems.h"
#include "recycleitems.h"
#include <vector>
#include <iostream>
#include <QPointF>

Model::Model(QObject *parent) : QObject{parent} {
    setUpItems();
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

void Model::setUpItems(){
    for(int i = 0; i < 2; i++){
        items.push_back(new TrashItems(i));
        items.push_back(new RecycleItems(i));
        items.push_back(new CompostItems(i));
    }
}

// TITLE SCREEN METHODS

// PURPOSE SCREEN METHODS

// INSTRUCTION SCREEN METHODS

// GAME SCREEN METHODS
void Model::mouseReleased(QPointF position)
{
    //if there is no current item. return.
    bool correctCollision = checkTrashCollision(position);

    if (correctCollision) {
        //itemQueue.remove(currentItem);
        //if(itemQueue.size == 0){
        //currentPage++;
        //emit changePage(currentPage);
        //}
    }
}

bool Model::checkTrashCollision(QPointF position)
{
    /*
    if(position.x() > trashIndex0.startX() && position.x() < trashIndex0.endX()
        &&position.y() >trashIndex0.bottomY() && position.y() < trashIndex0.topY()){
        emit trashInBin(currentItem.trashType() == trashIndex0.trashType());
        return currentItem.trashType() == trashIndex0.trashType();
    }
    else if(position.x() > trashIndex1.startX() && position.x() < trashIndex1.endX()
        &&position.y() >trashIndex1.bottomY() && position.y() < trashIndex1.topY()){
        emit trashInBin(currentItem.trashType() == trashIndex1.trashType());
        return currentItem.trashType() == trashIndex1.trashType();
    }
    else if(position.x() > trashIndex2.startX() && position.x() < trashIndex2.endX()
        &&position.y() >trashIndex2.bottomY() && position.y() < trashIndex2.topY()){
        emit trashInBin(currentItem.trashType() == trashIndex2.trashType());
        return currentItem.trashType() == trashIndex2.trashType();
    }
    */
    return false;
}
// LOADING SCREEN METHODS

// CONCLUDING SCREEN METHODS
