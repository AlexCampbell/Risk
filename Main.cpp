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




void CheckResults(int i){

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

}


void CheckArmies(){

    int AtkRoll = myDiceroll.GetAtkArmies();
    int DefRoll = myDiceroll.GetDefArmies();
    int i = myDiceroll.Roll(AtkRoll, DefRoll);
    CheckResults(i);
}


int main(){

restart:

    CheckArmies();

    int anw;
    cout << "  Do You Want to Play Again?";
    cin >> anw;
        if (anw == 1) goto restart;

return 0;
};
