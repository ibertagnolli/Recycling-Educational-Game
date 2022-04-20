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
    return std::vector<int> {60,240,150,220};
}

bool RecycleBins::CollisionWithMe(QPointF pos){
    return ((pos.x() > 60 && pos.x() < 60+150) && (pos.y() > 240 && pos.y() < 240+220));
}

QImage* RecycleBins::getImage(){
    return &binImage;
}


