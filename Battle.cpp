#include <iostream>
#include <vector>
#include <algorithm>

#include "battle.h"
#include "DiceRoll.h"

using namespace std;

Battle::Battle() {

}

DiceRoll myDiceroll;

int CheckResults(int i){

    if (i == 1)
        std::cout << "Two lost on Denfense" << std::endl;
    if (i == 2)
        std::cout << "One lost on Both Sides" << std::endl;
    if (i == 3)
        std::cout << "Two lost on Attack" << std::endl;
    if (i == 4)
        std::cout << "One lost on Defense" << std::endl;
    if (i == 5)
        std::cout << "One lost on Attack" << std::endl;

    if (i == 0)
        std::cout << "Something Asploded" << std::endl;

 return i;
}

int CheckArmies(int A, int D){

    int AtkRoll = myDiceroll.GetAtkArmies(A);
    int DefRoll = myDiceroll.GetDefArmies(D);
    int i = myDiceroll.Roll(AtkRoll, DefRoll);
    int v = CheckResults(i);

return v;
}

int GetTotalA(){
    int attack;

    std::cout << "How many units are in the attakers country: ";
    std::cin >> attack;

    return attack;

}

int GetTotalD(){
    int defense;

    std::cout << "How many units are in the defenders country: ";
    std::cin >> defense;

return defense;
}

int Battle::Results(std::vector<int>& Atkroll, std::vector<int>& Defroll) {
    if (Atkroll.size() == 3) {
        if (Defroll.size() == 2) {
            if (Atkroll[2] > Defroll[1]) {
                if (Atkroll[1] > Defroll[0])
                    return 1;
                else
                    return 2;
            } else if (Atkroll[2] <= Defroll[1]) {
                if (Atkroll[1] <= Defroll[0])
                    return 3;
                else
                    return 2;
            }
        } else if (Defroll.size() == 1) {
            if (Atkroll[2] > Defroll[0])
                return 4;
            else
                return 5;
        }
    }
    if (Atkroll.size() == 2) {
        if (Defroll.size() == 2)
        if (Atkroll[1] > Defroll[1]) {
            if (Atkroll[0] > Defroll[0])
                return 1;
            else
                return 2;
        } else if (Atkroll[1] <= Defroll[1]) {
            if (Atkroll[0] <= Defroll[0])
                return 3;
            else
                return 2;
        } else if (Defroll.size() == 1) {
            if (Atkroll[1] > Defroll[0])
                return 4;
            else
                return 5;
        }
    }
    if (Atkroll.size() == 1) {
        if (Defroll.size() == 2)
            if (Atkroll[0] > Defroll[1])
                return 4;
            else
                return 5;
        else if (Defroll.size() == 1) {
            if (Atkroll[0] > Defroll[0])
                return 4;
            else
                return 5;
        }
    }
    return 0;
}

int BattleControl(){

restart:

  int A = GetTotalA();

  int D = GetTotalD();

reroll:

    int v = CheckArmies(A, D);

    if (v == 1){
            D -= 2;}
    if (v == 2){
            A -= 1;
            D -= 1;}
    if (v == 3){
            A -= 2;}
    if (v == 4){
            D -= 1;}
    if (v == 5){
            A -= 1;}

    std::cout << " Total Remaining Units for Attack: " << A << std::endl;
    std::cout << " Total Remaining Unites for Defense: " << D << std::endl;

   if (A == 1){
        std::cout << "Attackers are out of Units" << std::endl;}

    if (D == 0){
        std::cout << "Attackers Win!" << std::endl;

        }


reanw:

    int anw;
    std::cout << "  Do You Want to Play Again?" << std::endl;
       std::cin >> anw;

        if ((anw == 1) && (A != 1) && (D != 0)){
            goto reroll;}

        if (anw == (1) && ((A == 1) || (D == 0))){
            std::cout << "Can't Reroll. Please quit or restart." << std::endl;
            goto reanw;}

        if (anw == 0){
            goto restart;}

return 0;
};

