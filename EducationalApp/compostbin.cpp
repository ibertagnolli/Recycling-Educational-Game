#include "compostbin.h"

CompostBin::CompostBin()
{
    QImage image(":/images/images/yardBin.png");
    binImage = image;
}

CompostBin::~CompostBin(){}

QString CompostBin::getDescription(){
    return "The compost bin is used for yard waste items "
           "such as weeds, lawn clippings, leaves, tree branches, "
           "fruits, vegetables, tea bags, and coffee.";
}

QString CompostBin::getName(){
    return "Compost Bin";
}

Bins::BinType CompostBin::getType(){
    return Bins::BinType::Compost;
}

std::vector<int> CompostBin::getRegion(){
    return std::vector<int> {x, y, width,height};
}

void CompostBin::setRegion(int x, int y, int width, int height){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}


bool CompostBin::CollisionWithMe(QPointF pos){
    return ((pos.x() > x && pos.x() < x+width) && (pos.y() > y && pos.y() < y+height));
}

QImage* CompostBin::getImage(){
    return &binImage;
}
