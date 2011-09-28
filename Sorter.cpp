#include "Sorter.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include "battle.h"

Battle myBattle;

Sorter::Sorter(){
}


typedef std::vector<int> int_vec;
typedef std::vector<int>::iterator int_iter;

std::ostream& operator<< (std::ostream& out, int_vec& vec){
    for (int_iter iter = vec.begin(); iter != vec.end(); iter++)
        out << " " << *iter;
    return out;

}

int Sorter::asorter(std::vector<int> arry, std::vector<int> arry2){

    {
        std::sort(arry.begin(), arry.end());
        std::cout << " Atk Sorted: " << arry << std::endl;
    }

    {
        std::sort(arry2.begin(), arry2.end());
        std::cout << " Def Sorted: " << arry2 << std::endl;
    }

    int i = myBattle.Results(arry, arry2);

    return i;
}


