#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <vector>
#include "DiceRoll.h"
#include "Sorter.h"
using namespace std;

Sorter mySorter;


DiceRoll::DiceRoll(){
}

namespace atk
        {
            int roll;

        }

namespace def
        {
            double roll;


        }


 int DiceRoll::GetDefArmies(int D){

        if (D > 1){
            def::roll = 2;}
        else if (D == 1){
            def::roll = 1;}

return def::roll;
    }

  int DiceRoll::GetAtkArmies(int A){

  retry:    cout << "How Many Units is the Attacker using?: ";
            cin >> atk::roll;

        if (atk::roll >= A){
            if ((atk::roll - A) <= 0){
                cout << "Sorry, there needs to be at least one left. Try Again." << endl;
                    goto retry;}
            else
                cout << "Sorry you do not have enough. Try Again " << endl;
                    goto retry;}


    return atk::roll;
}


int DiceRoll::Roll(int atk, int def){
                vector<int> aroll;
                vector<int> droll;
                    srand (time(NULL));

                        if (atk >= 3){
                                aroll.push_back ((rand() % 6)+1);
                                aroll.push_back ((rand() % 6)+1);
                                aroll.push_back ((rand() % 6)+1);
                                    cout << "Attacker Rolls: " <<  aroll[0] << " " << aroll[1] << " " << aroll[2] << endl;
                                }

                        if (atk == 2){
                                aroll.push_back ((rand() % 6)+1);
                                aroll.push_back ((rand() % 6)+1);
                                    cout << "Attacker Rolls: " << aroll[0] << " " << aroll[1] << endl;
                                        }

                        if (atk == 1){
                                aroll.push_back ((rand() % 6)+1);
                                    cout << "Attacker Rolls: " << aroll[0] << endl;
                                        }


                        if (def >= 2) {
                                droll.push_back ((rand() % 6)+1);
                                droll.push_back ((rand() % 6)+1);
                                    cout << " Defenders Rolls: " << droll[0] << " " << droll[1] << endl;
                            }


                        if (def == 1){
                                droll.push_back ((rand() % 6)+1);
                                    cout << " Defenders Rolls: " << droll[0] << endl;
                            }



                    int i = mySorter.asorter(aroll, droll);
 return i;
}
