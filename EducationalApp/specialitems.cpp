#include "specialitems.h"


SpecialItems::SpecialItems(int index)
{
    setItemImage(index);
    setItemName(index);
    setItemDescription(index);
    setLevel(index);
}

SpecialItems::~SpecialItems()
{

}

QString SpecialItems::getName()
{
    return name;
}

QString SpecialItems::getDescription()
{
    return description;
}

Items::ItemType SpecialItems::getType()
{
    return Items::ItemType::Special;
}

int SpecialItems::getLevel()
{
    return level;
}

void SpecialItems::setItemImage(int index)
{
    switch(index)
    {
        case 0: // Book
        {
            QImage image(":/images/images/TrashImages/Book.png");
            itemImage = image.copy();
            break;
        }
        case 1:  //Tire
        {
            QImage image(":/images/images/TrashImages/Tire.png");
            itemImage = image.copy();
            break;
        }
        case 2: //Glass
        {
            QImage image(":/images/images/TrashImages/Glass.png");
            itemImage = image.copy();
            break;
        }
        case 3: //CLothing and Textiles
        {
            QImage image(":/images/images/TrashImages/Clothing.png");
            itemImage = image.copy();
            break;
        }
        case 4: //Plastic Bag
        {
            QImage image(":/images/images/TrashImages/Plastic Bag.png");
            itemImage = image.copy();
            break;
        }
        case 5: // Styrofoam
        {
            QImage image(":/images/images/TrashImages/Styrofoam.png");
            itemImage = image.copy();
            break;
        }
        case 6: //Electronics
        {
            QImage image(":/images/images/TrashImages/Electronics.png");
            itemImage = image.copy();
            break;
        }
        case 7: //Battery
        {
            QImage image(":/images/images/TrashImages/Battery.png");
            itemImage = image.copy();
            break;
        }
    }
}

QImage* SpecialItems::getImage()
{
    return &itemImage;
}

void SpecialItems::setItemName(int index)
{
    switch(index)
    {
        case 0:
        {
            name = "Book";
            break;
        }
        case 1:
        {
            name = "Tire";
            break;
        }
        case 2:
        {
            name = "Glass";
            break;
        }
        case 3:
        {
            name = "Clothing";
            break;
        }
        case 4:
        {
            name = "Plastic bag";
            break;
        }
        case 5:
        {
            name = "Styrofoam";
            break;
        }
        case 6:
        {
            name = "Electronics";
            break;
        }
        case 7:
        {
            name = "Batteries";
            break;
        }
    }
}

void SpecialItems::setItemDescription(int index)
{
    switch(index)
    {
        case 0: // Book
        {
            description = "Any books can be recycled, but it is better if they"
                          "are taken to a donation center to be reused. Salt lake city has special"
                          "book drop off loactions.";
            break;
        }
        case 1: // Tire
        {
            description = "Tires can be dropped off with Liberty Tire or"
                          " recycled through Call 2 Haul (up to 4 car tires accepted).";
            break;
        }
        case 2: // Glass
        {
            description = " Only glass bottles and jars may be recycled. "
                          "Make sure the container is empty and has no lid or corks. "
                          "It is okay if they are broken. Salt Lake City allows for voluntary "
                          "curbside and drop off glass recycling.";
            break;
        }
        case 3: // Clothing and Textiles
        {
            description = " New or gently used clothing can be taken to a donation center "
                          "such as Deseret Industries";
            break;
        }
        case 4: // Plastic Bags and Films
        {
            description = " Clean plastic bags can be returned to most grocery stores.";
            break;
        }
        case 5: // Styrofoam
        {
            description = "  Block Styrofoam is accepted for drop off but no packing peanuts or take-out containers are allowed.";
            break;
        }
        case 6: //Electronics
        {
            description = "Working electronics may be donated. Broken electronics should be "
                          "recycled or disposed of at drop off locations.";
            break;
        }
        case 7: //Battery
        {
            description = "look for dedicated in-store recycling bins or household hazardous waste "
                          "collection events for battery disposal";
            break;
        }
    }
}

void SpecialItems::setLevel(int index)
{
    switch (index)
    {
        case 0: // Book
        {
            level = 3;
            break;
        }
        case 1: // Tire
        {
            level = 3;
            break;
        }
        case 2: // Glass
        {
            level = 3;
            break;
        }
        case 3: // Clothing and Textiles
        {
            level = 3;
            break;
        }
        case 4: // Plastic Bags and Films
        {
            level = 3;
            break;
        }
        case 5: // Styrofoam
        {
            level = 3;
            break;
        }
        case 6: //Electronics
        {
            level = 3;
            break;
        }
        case 7: //Battery
        {
            level = 3;
            break;
        }
    }
}

