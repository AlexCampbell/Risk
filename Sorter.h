#ifndef Sorter_H
#define Sorter_H

#include <vector>
#include <algorithm>

#include "battle.h"

class Sorter: public Battle {
public:
    Sorter();
    int asorter(std::vector<int>& arr, std::vector<int>& arr2);
};

#endif
