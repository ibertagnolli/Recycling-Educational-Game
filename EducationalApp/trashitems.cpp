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
    }case 2: { // Paper towels
        QImage image(":/images/images/TrashImages/Paper Towels.png");
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
    }case 2: { // Paper Towels
        description = "Tissue paper is hard to recycle because it's already been recycled:"
                      " it's made from recycled paper, so the fibers are shortened to the point where it "
                      "cannot feasibly go through the recycling process again.";
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
    case 2: {
            name = "Paper Towels";
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
    case 2: { // Paper Towels
        level = 1;
        break;
    }
    }
}
