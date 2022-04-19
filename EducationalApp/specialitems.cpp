#include "specialitems.h"


    SpecialItems::SpecialItems(int index)
    {
        setItemImage(index);
        setItemName(index);
        setItemDescription(index);
        setLevel(index);
    }

    QString SpecialItems::getName() {
        return name;
    }

    QString SpecialItems::getDescription(){
        return description;
    }

    Items::ItemType SpecialItems::getType(){
        return Items::ItemType::Special;
    }

    int SpecialItems::getLevel()
    {
        return level;
    }

    void SpecialItems::setItemImage(int index){
        switch(index){
        case 0: { // Plastic Water Bottle
            QImage image(":/images/images/TrashImages/Plastic Water Bottle.png");
            itemImage = image.copy();
            break;
        } case 1: { // Cardboard
            QImage image(":/images/images/TrashImages/Book.png");
            itemImage = image.copy();
            break;
        }
        }
    }

    void SpecialItems::setItemName(int index) {
        switch(index) {
        case 0: {
            name = "Book";
            break;
        }
        }
    }

    void SpecialItems::setItemDescription(int index){
        switch(index) {
        case 0: { // Book
            description = "Any books can be recycled, but it is better if they"
                          "are taken to a donation center to be reused. Salt lake city has special"
                          "book drop off loactions.";
            break;
        }
        }
    }

    void SpecialItems::setLevel(int index)
    {
        switch (index) {
        case 0: { // Book
            level = 3;
            break;
        }
        }
    }

