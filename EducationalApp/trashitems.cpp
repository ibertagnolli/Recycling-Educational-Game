#include "trashitems.h"

TrashItems::TrashItems(int itemIndex)
{
    setImage(itemIndex);
    setDescription(itemIndex);
    setName(itemIndex);
    setLevel(itemIndex);
}

TrashItems::~TrashItems(){}

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
    case 0:// Meat
    {
        QImage image(":/images/images/TrashImages/Meat.png");
        itemImage = image.copy();
        break;
    }
    case 1: // Food Wrappers
    {
        QImage image(":/images/images/TrashImages/Food Wrappers.png");
        itemImage = image.copy();
        break;
    }
    case 2: // Paper towels
    {
        QImage image(":/images/images/TrashImages/Paper Towels.png");
        itemImage = image.copy();
        break;
    }
    case 3:  // Toothbrush
    {
        QImage image(":/images/images/TrashImages/Toothbrush.png");
        itemImage = image.copy();
        break;
    }
    case 4:  // Shredded Paper
    {
        QImage image(":/images/images/TrashImages/Shredded Paper.png");
        itemImage = image.copy();
        break;
    }
    case 5:
    {     // Hot Beverage Cup
        QImage image(":/images/images/TrashImages/Hot Beverage Cup.png");
        itemImage = image.copy();
        break;
    }
    case 6: //Coffee Pod
    {
        QImage image(":/images/images/TrashImages/Coffee Pod.png");
        itemImage = image.copy();
        break;
    }
    }
}

QImage* TrashItems::getImage(){
    return &itemImage;
}

void TrashItems::setDescription(int index){
    switch(index) {
    case 0:    // Meat
    {
        description = "Meat, dairy, and non-compostable food waste goes into the trash bin;"
                      "compostable food waste goes into the compost bin";
        break;
    }
    case 1:        // Food Wrappers
    {
        description = "In Salt Lake County, most food wrappers are non-"
                      "recyclable.";
        break;
    }
    case 2: // Paper Towels
    {
        description = "Tissue paper is hard to recycle because it's already been recycled:";
        break;
    }
    case 3: // ToothBrush
    {
        description = "Toothbrushes get caught in the machine so they can't be recycled.";
        break;
    }
    case 4: // Shredded paper
    {
        description = "shredded paper cannot be recycled because it is too small.";
        break;
    }
    case 5: //Hot Beverage cup
    {
        description = "Hot Beverage cups from places like starbucks and beans and brews have a "
                      "waxy film on the inside that make them unrecylable.";
        break;
    }
    case 6: //Coffee Pod
    {
        description = "Coffee pods are made of non recyclable plastic and since they are "
                      "so small they also cannot be recycled.  ";
        break;
    }
    }
}

void TrashItems::setName(int index){
    switch(index){
    case 0: {
        name = "Meat";
        break;
    }
    case 1:
    {
        name = "Food Wrappers";
        break;
    }
    case 2:
    {
        name = "Paper Towels";
        break;
    }
    case 3:
    {
        name = "Toothbrush";
        break;
    }
    case 4:
    {
        name = "Shredded Paper";
        break;
    }
    case 5:
    {
        name = "Hot Beverage Cup";
        break;
    }
    case 6:
    {
        name = "Coffee Pod";
        break;
    }
    }
}

void TrashItems::setLevel(int index)
{
    switch (index)
    {
    case 0:
    {
        // Meat
        level = 1;
        break;
    }
    case 1:
    {
        // Food Wrappers
        level = 1;
        break;
    }
    case 2:
    {
        // Paper Towels
        level = 1;
        break;
    }
    case 3:
    {
        // ToothBrush
        level = 2;
        break;
    }
    case 4:
    {
        // Shredded Paper
        level = 2;
        break;
    }
    case 5:
    {
        // Hot Beverage Cup
        level = 3;
        break;
    }
    case 6:
    {
        // coffee pod
        level = 3;
        break;
    }
    }
}
