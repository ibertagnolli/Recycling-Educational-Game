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
    return std::vector<int> {240, 240, 150,220};
}

QImage* TrashBins::getImage(){
    return &binImage;
}
