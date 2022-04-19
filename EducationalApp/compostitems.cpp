#include "compostitems.h"

CompostItems::CompostItems(int itemIndex)
{
    setImage(itemIndex);
    setDescription(itemIndex);
    setName(itemIndex);
    setLevel(itemIndex);
}

Items::ItemType CompostItems::getType(){
    return Items::ItemType::Compost;
}

QString CompostItems::getName(){
    return name;
}

QString CompostItems::getDescription() {
    return description;
}

int CompostItems::getLevel()
{
    return level;
}

void CompostItems::setImage(int index){
    switch(index) {
    case 0: { // Banana Peel
        QImage image(":/images/images/TrashImages/Banana Peel.png");
        itemImage = image.copy();
        break;
    } case 1: { // Lawn Clippings
        QImage image(":/images/images/TrashImages/Lawn Clippings.png");
        itemImage = image.copy();
        break;
    }
    }
}

void CompostItems::setName(int index) {
    switch(index) {
    case 0: {
        name = "Banana Peel";
        break;
    }
    case 1: {
        name = "Lawn Clippings";
        break;
    }
    }
}

void CompostItems::setDescription(int index) {
    switch(index) {
    case 0: { // Banana Peel
        description = "Whole fruits and vegetables and their scraps can go in "
                      "the compost bin. Remember to remove any stickers!";
        break;
    }
    case 1: { // Lawn Clippings
        description = "Lawn clippings, leaves, branches, and weeds can go in the "
                      "compost bin. Plastic bags, sod, dirt, rocks, and construction "
                      "wood cannot.";
        break;
    }
    }
}

void CompostItems::setLevel(int index)
{
    switch (index) {
    case 0: { //Banana Peel
        level = 1; // for right now, let's just have each item on one level
        break;
    }
    case 1: { // Lawn Clippings
        level = 1;
        break;
    }
    }
}

