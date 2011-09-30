#include "Sorter.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include "battle.h"

Battle myBattle;

Sorter::Sorter() {
    
}

std::ostream& operator<< (std::ostream& out, int_vec& vec) {
    for (int_iter iter = vec.begin(); iter != vec.end(); iter++)
        out << " " << *iter;
    return out;
}

int Sorter::asorter(std::vector<int>& arr, std::vector<int>& arr2) {

    {
        std::sort(arr.begin(), arr.end());
        std::cout << " Atk Sorted: " << arr << std::endl;
    }

    {
        std::sort(arr2.begin(), arr2.end());
        std::cout << " Def Sorted: " << arr2 << std::endl;
    }

    int i = myBattle.Results(arr, arr2);

    return i;
}


