#include "recyclebins.h"
#include <QImage>

RecycleBins::RecycleBins()
{
    QImage image(":/images/images/recycleBin.png");
    binImage = image;
}

RecycleBins::~RecycleBins(){}

std::string RecycleBins::getDescription(){
    return "The curbside recycle bin, typically blue in color, "
           "Typical items that can go in the bin are boxes,"
           " cans, paper, and books. Items that can't go into "
           " curbside recycle bins are glass, tissues/napkins, "
           "batteries, and plastic bags.";
}

std::string RecycleBins::getName(){
    return "Recycle Bin";
}

Bins::BinType RecycleBins::getType(){
    return Bins::BinType::Recycle;
}

std::vector<int> RecycleBins::getRegion(){
    return std::vector<int> {60,240,150,220};
}

QImage* RecycleBins::getImage(){
    return &binImage;
}


