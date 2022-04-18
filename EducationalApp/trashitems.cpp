#include "trashitems.h"

TrashItems::TrashItems(int itemIndex)
{
    setImage(itemIndex);
    setDescription(itemIndex);
    setName(itemIndex);
    setLevel(itemIndex);
}

Items::ItemType TrashItems::getType(){
    return Items::ItemType::Trash;
}

QString TrashItems::getName(){
    return name;
}

QString TrashItems::getDescription(){
    return description;
}

int TrashItems::getLevel()
{
    return level;
}

void TrashItems::setImage(int index) {
    switch(index) {
    case 0: { // Meat
        QImage image(":/images/images/TrashImages/Meat.png");
        itemImage = image.copy();
        break;
    } case 1: { // Food Wrappers
        QImage image(":/images/images/TrashImages/Food Wrappers.png");
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
        description = "In Salt Lake County, most food wrappers are non-"
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
        name = "Food Wrappers";
    }
    }
}

void TrashItems::setLevel(int index)
{
    switch (index) {
    case 0: { // Meat
        level = 1;
        break;
    }
    case 1: { // Food Wrappers
        level = 1;
        break;
    }
    }
}
