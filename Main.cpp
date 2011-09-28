#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <vector>
#include "DiceRoll.h"
#include "Sorter.h"
using namespace std;


DiceRoll myDiceroll;




int CheckResults(int i){

    if (i == 1)
        cout << "Two lost on Denfense";
    if (i == 2)
        cout << "One lost on Both Sides";
    if (i == 3)
        cout << "Two lost on Attack";
    if (i == 4)
        cout << "One lost on Defense";
    if (i == 5)
        cout << "One lost on Attack";

    if (i == 0)
        cout << "Something Asploded";

 return i
}


int CheckArmies(int A, int D){

    int AtkRoll = myDiceroll.GetAtkArmies(A);
    int DefRoll = myDiceroll.GetDefArmies(D);
    int i = myDiceroll.Roll(AtkRoll, DefRoll);
    int i = CheckResults(i);
}


int GetTotalA(){

    cout << "How many units are in the attakers country";
    cin >> attack;

    return attack;

}


int GetTotalD(){

    cout << "How many units are in the defenders country";
    cin >> defense;

return defense;
}

int main(){

  int A = GetTotalA()

  int D = GetTotalD()

restart:

    CheckArmies();




    int anw;
    cout << "  Do You Want to Play Again?";
    cin >> anw;
        if (anw == 1) goto restart;

return 0;
};
