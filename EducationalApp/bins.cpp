#include "bins.h"

Bins::Bins(std::vector<int> reg,
           BinType binType, std::string nameBin, std::string des) :
    boundingRegion(reg), description(des), name(nameBin),type(binType) {};

