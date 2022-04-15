#include "specialbins.h"

SpecialBins::SpecialBins(std::string center) :
    Bins(std::vector<int> {240, 240, 150,220},
         Bins::BinType::Special, center, "some text")
{

}

std::string SpecialBins::getDescription(){
    return description;
}

std::string SpecialBins::getName(){
    return name;
}

Bins::BinType SpecialBins::getType(){
    return type;
}

std::vector<int> SpecialBins::getRegion(){
    return boundingRegion;
}
