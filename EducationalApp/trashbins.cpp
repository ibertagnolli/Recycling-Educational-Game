#include "trashbins.h"

TrashBins::TrashBins()
{
    QImage image(":/images/images/trashBin.png");
    binImage = image;
}

TrashBins::~TrashBins(){}

QString TrashBins::getDescription(){
    return "The items that can't be recycled or composted classifies"
           " as being trashed. Some of the items include tissues, napkins, "
           "meat, dairy, diapers, and food wrappers";
}

QString TrashBins::getName(){
    return "Trash Can";
}

Bins::BinType TrashBins::getType(){
    return Bins::BinType::Trash;
}

std::vector<int> TrashBins::getRegion(){
    return std::vector<int> {x, y, width,height};
}

bool TrashBins::CollisionWithMe(QPointF pos){
    return ((pos.x() > x && pos.x() < x+width) && (pos.y() > y && pos.y() < y+height));
}

void TrashBins::setRegion(int x, int y, int width, int height){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

QImage* TrashBins::getImage(){
    return &binImage;
}
