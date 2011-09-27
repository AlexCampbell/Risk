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

int Sorter::asorter(int arr[], int sz, int arr2[], int sz2){

    {int_vec vec(arr,arr+sz);
    std::sort(vec.begin(), vec.end());
    std::cout << " Atk Sorted: " << vec << std::endl;}

    {int_vec vec(arr2,arr2+sz2);
    std::sort(vec.begin(), vec.end());
    std::cout << " Def Sorted: " << vec << std::endl;}

    int i = myBattle.Results(arr, arr2);

    return i;
}

