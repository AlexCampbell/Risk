#include <iostream>

#include "DiceRoll.h"
#include "Sorter.h"
using namespace std;


DiceRoll myDiceroll;




int CheckResults(int i){

    if (i == 1)
        cout << "Two lost on Denfense" << endl;
    if (i == 2)
        cout << "One lost on Both Sides" << endl;
    if (i == 3)
        cout << "Two lost on Attack" << endl;
    if (i == 4)
        cout << "One lost on Defense" << endl;
    if (i == 5)
        cout << "One lost on Attack" << endl;

    if (i == 0)
        cout << "Something Asploded" << endl;

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

    cout << "How many units are in the attakers country: ";
    cin >> attack;

    return attack;

}

int GetTotalD(){
    int defense;

    cout << "How many units are in the defenders country: ";
    cin >> defense;

return defense;
}

int main(){
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

    cout << " Total Remaining Units for Attack: " << A <<endl;
    cout << " Total Remaining Unites for Defense: " << D << endl;

   if (A == 1){
        cout << "Attackers are out of Units" << endl;}

    if (D == 0){
        cout << "Attackers Win!" << endl;}


reanw:

    int anw;
        cout << "  Do You Want to Play Again?" << endl;
        cin >> anw;

        if ((anw == 1) && (A != 1) && (D != 0)){
            goto reroll;}

        if (anw == (1) && ((A == 1) || (D == 0))){
            cout << "Can't Reroll. Please quit or restart." << endl;
            goto reanw;}

        if (anw == 0){
            goto restart;}

return 0;
};
