#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include "DiceRoll.h"
#include "Sorter.h"
//using namespace std;

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


 int DiceRoll::GetDefArmies(){

            cout << "How many units does the defense have? ";
            cin >> def::roll;

        return def::roll;
    }

  int DiceRoll::GetAtkArmies(){

            cout << "How Many Units is the Attacker using? ";
            cin >> atk::roll;

        return atk::roll;
}

    int DiceRoll::aroll(int atk, int def){
                int aroll [] = {};
                int droll [] = {};
                int alength;
                int dlength;
                    srand (time(NULL));

                        if (atk >= 3){
                                aroll[0] = (rand() % 6)+1;
                                aroll[1]= (rand() % 6)+1;
                                aroll[2] = (rand() % 6)+1;
                                    cout << "Attacker Rolls: " <<  aroll[0] << " " << aroll[1] << " " << aroll[2];
                                        alength = 3;
                                }


                        if (atk == 2){
                                aroll[0] = (rand() % 6)+1;
                                aroll[1] = (rand() % 6)+1;
                                    cout << "Attacker Rolls: " << aroll[0] << " " << aroll[1];
                                        alength = 2;
                                    }

                        if (atk == 1){
                                aroll[0] = (rand() % 6)+1;
                                    cout << "Attacker Rolls: " << aroll[0];
                                        alength = 1;}

                        if (def == 1){
                                droll[0] = (rand() % 6)+1;
                                    cout << " Defenders Rolls: " << droll[0];
                                        dlength = 1;
                            }


                        if (def >= 2) {
                                droll[0] = (rand() % 6)+1;
                                droll[1] = (rand() % 6)+1;
                                    cout << " Defenders Rolls: " << droll[0] << " " << droll[1];
                                        dlength = 2;
                            }

                    int i = mySorter.asorter(aroll, alength, droll, dlength);
 return i;
}
