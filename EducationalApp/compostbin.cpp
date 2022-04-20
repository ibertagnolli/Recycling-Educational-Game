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
    return std::vector<int> {420, 240, 150,223};
}

bool CompostBin::CollisionWithMe(QPointF pos){
    return ((pos.x() > 420 && pos.x() < 420+150) && (pos.y() > 240 && pos.y() < 240+223));
}

QImage* CompostBin::getImage(){
    return &binImage;
}
