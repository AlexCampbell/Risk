#ifndef Sorter_H
#define Sorter_H

#include <vector>
#include <algorithm>

#include "battle.h"

typedef std::vector<int> int_vec;
typedef std::vector<int>::iterator int_iter;

std::ostream& operator<< (std::ostream& out, int_vec& vec);

class Sorter: public Battle {
public:
    Sorter();
    int asorter(std::vector<int>& arr, std::vector<int>& arr2);
};

#endif
