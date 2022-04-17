#include "trashitems.h"

TrashItems::TrashItems(int itemIndex)
{
    setImage(itemIndex);
    setDescription(itemIndex);
    setName(itemIndex);
}

Items::ItemType TrashItems::getType(){
    return Items::ItemType::Trash;
}

std::string TrashItems::getName(){
    return name;
}

std::string TrashItems::getDescription(){
    return description;
}

void TrashItems::setImage(int index) {
    switch(index) {
    case 0: { // banana Peel
        QImage image(":/images/images/TrashImages/bananaPeel.png");
        itemImage = image.copy();
        break;
    } case 1: { // Lawn Clippings
        QImage image(":/images/images/TrashImages/plasticWaterBottle.png");
        itemImage = image.copy();
        break;
    }
    }
}

void TrashItems::setDescription(int index){
    switch(index) {
    case 0: { // Meat
        description = "Meat, dairy, and non-compostable food waste"
                      " goes into the trash bin; wheras compostable food "
                      "waste goes into the compost bin";
        break;
    } case 1: { // Food Wrappers
        description = "In salt lake city, most food wrappers are non "
                      "recyclable. Food wrappers that are recyclable are "
                      "plastic containers and cardboard boxes.";
        break;
    }
    }
}

void TrashItems::setName(int index){
    switch(index){
    case 0: {
        name = "Meat";
        break;
    } case 1: {
        name = "Lawn Clippings";
    }
    }
}
