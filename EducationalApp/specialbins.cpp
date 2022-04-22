#include "specialbins.h"

SpecialBins::SpecialBins()
{
    QImage image(":/images/images/DonationBin.png");
    binImage = image;
}

SpecialBins::~SpecialBins(){}

QString SpecialBins::getDescription(){
    return "Even though materials are recycle some of these"
           " items are not allowed in the curbside recycle bin. Some "
           "items are glass, electronics, clothing, art supplies, and "
           "auto tires.";
}

QString SpecialBins::getName(){
    return "Special Recycling Center";
}

Bins::BinType SpecialBins::getType(){
    return Bins::BinType::Special;
}

std::vector<int> SpecialBins::getRegion(){
    return std::vector<int> {x, y, width,height};
}

void SpecialBins::setRegion(int x, int y, int width, int height){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

bool SpecialBins::CollisionWithMe(QPointF pos){
    return ((pos.x() > x && pos.x() < x+width) && (pos.y() > y && pos.y() < y+height));
}

QImage* SpecialBins::getImage() {
    return &binImage;
}
