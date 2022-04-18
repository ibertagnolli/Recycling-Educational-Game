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

std::string CompostItems::getName(){
    return name;
}

std::string CompostItems::getDescription() {
    return description;
}

int CompostItems::getLevel()
{
    return level;
}

void CompostItems::setImage(int index){
    switch(index) {
    case 0: { // banana Peel
        QImage image(":/images/images/TrashImages/bananaPeel.png");
        itemImage = image.copy();
        break;
    } case 1: { // Lawn Clippings
        QImage image(":/images/images/pinkTulip1.png");
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
    } case 1: {
        name = "Lawn Clippings";
        break;
    }
    }
}

void CompostItems::setDescription(int index) {
    switch(index) {
    case 0: { // Banana Peel
        description = "Whole fruits and vegetables and their"
                      " scraps can go in the compost bin. Just "
                      "make sure that all of the stickers are removed";
        break;
    } case 1: { // Lawn Clippings
        description = "Most yard work waste such as lawn clippings, "
                      "leaves, branches, and weeds can go in the "
                      "compost bin. However, plastic bags, sod, dirt, rocks, construction "
                      "wood can not go in compost bin";
        break;
    }
    }
}

void CompostItems::setLevel(int index)
{
    switch (index) {
    case 0: //Banana Peel
        level = 4;
        break;
    }
}
