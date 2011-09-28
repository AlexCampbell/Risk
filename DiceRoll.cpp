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


    int DiceRoll::Roll(int atk, int def){
                vector<int> aroll;
                vector<int> droll;
                int alength;
                int dlength;
                    srand (time(NULL));

                        if (atk >= 3){
                                aroll.push_back ((rand() % 6)+1);
                                aroll.push_back ((rand() % 6)+1);
                                aroll.push_back ((rand() % 6)+1);
                                    cout << "Attacker Rolls: " <<  aroll[0] << " " << aroll[1] << " " << aroll[2];
                                        alength = aroll.size();
                                }

                        if (atk == 2){
                                aroll.push_back ((rand() % 6)+1);
                                aroll.push_back ((rand() % 6)+1);
                                    cout << "Attacker Rolls: " << aroll[0] << " " << aroll[1];
                                        alength = 2;
                                        }

                        if (atk == 1){
                                aroll.push_back ((rand() % 6)+1);
                                    cout << "Attacker Rolls: " << aroll[0];
                                        alength = 1;
                                        }


                        if (def >= 2) {
                                droll.push_back ((rand() % 6)+1);
                                droll.push_back ((rand() % 6)+1);
                                    cout << " Defenders Rolls: " << droll[0] << " " << droll[1];
                                        dlength = 2;
                            }


                        if (def == 1){
                                droll.push_back ((rand() % 6)+1);
                                    cout << " Defenders Rolls: " << droll[0];
                                        dlength = 1;
                            }



                    int i = mySorter.asorter(aroll, droll);
 return i;
}
