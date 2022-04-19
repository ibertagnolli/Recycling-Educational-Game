#include "specialbins.h"

SpecialBins::SpecialBins()
{
    QImage image(":/images/images/yellowTulip1.png");
    binImage = image;
}

SpecialBins::~SpecialBins(){}

std::string SpecialBins::getDescription(){
    return "Even though materials are recycle some of these"
           " items are not allowed in the curbside recycle bin. Some "
           "items are glass, electronics, clothing, art supplies, and "
           "auto tires.";
}

std::string SpecialBins::getName(){
    return "Special Recycling Center";
}

Bins::BinType SpecialBins::getType(){
    return Bins::BinType::Special;
}

std::vector<int> SpecialBins::getRegion(){
    return std::vector<int> {420, 240, 150,220};
}

QImage* SpecialBins::getImage() {
    return &binImage;
}