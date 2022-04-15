#include "recyclebins.h"
#include <QImage>

RecycleBins::RecycleBins() :
    Bins(std::vector<int> {240, 240, 150,220}, Bins::BinType::Recycle,
         "Recycle Bin", "some text")
{
    QImage image(":/images/images/recycleBin.png");
    setImage(image);
}

std::string RecycleBins::getDescription(){
    return description;
}

std::string RecycleBins::getName(){
    return name;
}

Bins::BinType RecycleBins::getType(){
    return type;
}

std::vector<int> RecycleBins::getRegion(){
    return boundingRegion;
}


