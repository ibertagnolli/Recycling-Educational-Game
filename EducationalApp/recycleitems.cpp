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
    case 0: { // Plastic Water Bottle
        QImage image(":/images/images/TrashImages/Plastic Water Bottle.png");
        itemImage = image.copy();
        break;
    } case 1: { // Cardboard
        QImage image(":/images/images/TrashImages/Cardboard Box.png");
        itemImage = image.copy();
        break;
    }case 2: { // Cardboard
        QImage image(":/images/images/TrashImages/Metal and Aluminum Cans.png");
        itemImage = image.copy();
        break;
    }
    case 3: { // Paper Bag
            QImage image(":/images/images/TrashImages/Paper Bag.png");
            itemImage = image.copy();
            break;
        }
    case 4: { // Milk Carton
            QImage image(":/images/images/TrashImages/Milk Carton.png");
            itemImage = image.copy();
            break;
        }
    case 5: { // Milk Carton
            QImage image(":/images/images/TrashImages/NewsPaper.png");
            itemImage = image.copy();
            break;
        }

    }
}

QImage* RecycleItems::getImage(){
    return &itemImage;
}

void RecycleItems::setItemName(int index) {
    switch(index) {
    case 0: {
        name = "Plastic Water Bottle";
        break;
    }
    case 1: {
        name = "Cardboard";
        break;
    }
    case 2: {
        name = "Aluminum and Metal";
        break;
    }
    case 3: {
        name = "Paper Bag";
        break;
    }
    case 4: {
        name = "Milk Carton";
        break;
    }
    case 5: {
        name = "NewsPaper";
        break;
    }
    }
}

void RecycleItems::setItemDescription(int index){
    switch(index) {
    case 0: { // Plastic Water Bottle
        description = "Any plastic bottle, tub, or jug - "
                      "as long as it is clean and dry - can be"
                      "recycled in Salt Lake County regardless of the "
                      "number or chasing arrows.";
        break;
    }
    case 1: { // Cardboard
        description = "Cardboard boxes, shoe boxes, cereal boxes, and paper tubes "
                      "all can be placed in the curbside recycle bin. Break down the "
                      "boxes before placing them in the bin.";
        break;
    }
    case 2: { // Aluminum Can
        description = "Aluminum cans, soda cans, beer cans and other metals"
                      "can all be recycled in the blue recycle bin. "
                      "Make sure no liquid is left in the cans";
        break;
    }
    case 3: { // Paper Bag
        description = " Paper bags from grocery stores or retail stores "
                      "can be recycled with other paper items.";
        break;
    }
    case 4: { // Milk Carton
        description = "Milk cartons(plastic or paper) "
                      "can be recycled in Salt Lake. "
                      "Empty the container, rinse it out, and put it in your recycling bin.";
        break;
    }
    case 5: { // NewsPaper
        description = "Newspaper and other paper adds and goods can be recycled."
                      " Shredded paper however cannot be recycled. ";
        break;
    }
    }
}

void RecycleItems::setLevel(int index)
{
    switch (index) {
    case 0: { // Plastic Water Bottle
        level = 1;
        break;
    }
    case 1: { // Cardboard
        level = 1;
        break;
    }
    case 2: { // Aluminum and metals
        level = 1;
        break;
    }
    case 3: { // Paper Bag
        level = 2;
        break;
    }
    case 4: { // Milk Carton
        level = 2;
        break;
    }
    case 5: { // Newspaper
        level = 2;
        break;
    }
    }
}
