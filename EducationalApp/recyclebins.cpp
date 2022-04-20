#include "recyclebins.h"
#include <QImage>

RecycleBins::RecycleBins()
{
    QImage image(":/images/images/recycleBin.png");
    binImage = image;
}

RecycleBins::~RecycleBins(){}

QString RecycleBins::getDescription(){
    return "The curbside recycle bin, typically blue in color, "
           "Typical items that can go in the bin are boxes,"
           " cans, paper, and books. Items that can't go into "
           " curbside recycle bins are glass, tissues/napkins, "
           "batteries, and plastic bags.";
}

QString RecycleBins::getName(){
    return "Recycle Bin";
}

Bins::BinType RecycleBins::getType(){
    return Bins::BinType::Recycle;
}

std::vector<int> RecycleBins::getRegion(){
    return std::vector<int> {x,y,width,height};
}

void RecycleBins::setRegion(int x, int y, int width, int height){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

bool RecycleBins::CollisionWithMe(QPointF pos){
    return ((pos.x() > x && pos.x() < x+width) && (pos.y() > y && pos.y() < y+height));
}

QImage* RecycleBins::getImage(){
    return &binImage;
}


