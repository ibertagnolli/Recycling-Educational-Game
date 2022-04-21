#include "compostitems.h"

CompostItems::CompostItems(int itemIndex)
{
    setImage(itemIndex);
    setDescription(itemIndex);
    setName(itemIndex);
    setLevel(itemIndex);
}

CompostItems::~CompostItems(){}

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
    case 2: { // Tea Bag
        QImage image(":/images/images/TrashImages/Tea Bag.png");
        itemImage = image.copy();
        break;
        }
    case 3: { // Egg Shell
        QImage image(":/images/images/TrashImages/Egg Shell.png");
        itemImage = image.copy();
        break;
        }
    case 4: { // Coffee Grounds
        QImage image(":/images/images/TrashImages/Coffee Grounds.png");
        itemImage = image.copy();
        break;
        }
    case 5: { // Sticky Tape
        QImage image(":/images/images/TrashImages/Sticky Tape.png");
        itemImage = image.copy();
        break;
        }
    case 6: { // Sticky Tape
        QImage image(":/images/images/TrashImages/Leaves and Branches.png");
        itemImage = image.copy();
        break;
        }
   }
}

QImage* CompostItems::getImage(){
    return &itemImage;
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
    case 2: {
        name = "Tea bag";
        break;
    }
    case 3: {
        name = "Egg shell";
        break;
    }
    case 4: {
        name = "Coffee Grounds";
        break;
    }
    case 5: {
        name = "Sticky Tape";
        break;
    }
    case 6: {
        name = "Leaves and Branches";
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
        description = "Lawn clippings, and weeds can go in the "
                      "compost bin. Plastic bags, sod, dirt, rocks, and construction "
                      "wood cannot.";
        break;
    }
    case 2: { // Tea Bag
        description = "Salt Lake allows tea bags to be composted as long as they do not have staples. ";
        break;
    }
    case 3: { // Egg Shells
        description = "Salt Lake allows egg shells to be composted unlike meat";
        break;
    }
    case 4: { // Coffee Grounds
        description = "Salt Lake allows Coffee Grounds, not cups or lids to be composted.";
        break;
    }
    case 5: { // Sticky Tape
        description = "Sticky tape is not recyclable and should be put in the compost bin. "
                      "Sticky tape is reffering to painters tape not packing or clear tape. ";
        break;
    }
    case 6: { // Leaves
        description = "Leaves and branches from trees during fall can be composted! ";
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
    case 2: { // Tea Bag
        level = 1;
        break;
    }
    case 3: { // Egg Shells
        level = 2;
        break;
    }
    case 4: { // Coffee Grounds
        level = 2;
        break;
    }
    case 5: { // Sticky Tape
        level = 2;
        break;
    }
    case 6: { // Leaves and Branches
        level = 2;
        break;
    }
    }
}

