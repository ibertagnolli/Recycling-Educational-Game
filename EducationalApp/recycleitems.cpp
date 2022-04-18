#include "recycleitems.h"


RecycleItems::RecycleItems(int index)
{
    setItemImage(index);
    setItemName(index);
    setItemDescription(index);
    setLevel(index);
}

QString RecycleItems::getName() {
    return name;
}

QString RecycleItems::getDescription(){
    return description;
}

Items::ItemType RecycleItems::getType(){
    return Items::ItemType::Recycle;
}

int RecycleItems::getLevel()
{
    return level;
}

void RecycleItems::setItemImage(int index){
    switch(index){
    case 0: { // Water Bottle
        QImage image(":/images/images/TrashImages/plasticWaterBottle.png");
        itemImage = image.copy();
        break;
    } case 1: { // Cardboard Boxes
        QImage image(":/images/images/pinkTulip1.png");
        itemImage = image.copy();
        break;
    }
    }
}

void RecycleItems::setItemName(int index) {
    switch(index) {
    case 0: {
        name = "Water Bottle";
        break;
    }
    case 1: {
        name = "Cardboard Boxes";
    }
    }
}

void RecycleItems::setItemDescription(int index){
    switch(index) {
    case 0: { // Water Bottle
        description = "Any plastic bottle, tub, or jug - "
                      "as long as it is clean and dry - can be"
                      "recycled in Salt Lake County regardless of the "
                      "number or chasing arrows";
        break;
    }
    case 1: {
        description = "Cardboard boxes, shoe boxes, cereal boxes, and paper tubes "
                      "all can be placed in the curbside recycle bin. Break down the "
                      "boxes before placing them in the bin.";
        break;
    }
    }
}

void RecycleItems::setLevel(int index)
{
    switch (index) {
    case 0: //Water Bottle
        level = 4;
        break;
    }
}
