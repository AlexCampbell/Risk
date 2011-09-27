
//Results of Battle// //1 = Atk Wins both rolls //2 = 1 loss on both sides // 3 = Def wins two // 4 = Atk wins 1 //5 Def wins 1

#include "battle.h"
#include "DiceRoll.h"
#include <iostream>
using namespace std;

Battle::Battle(){

}


int Battle::Results(int Atkroll[], int alength, int Defroll[], int dlength){


                if (alength == 3){
                    if (dlength == 2)
                        if (Atkroll[2] > Defroll[1]){
                            if (Atkroll[1] > Defroll[0])
                                return 1;
                            else
                                return 2;}
                        else if (Atkroll[2] <= Defroll[1]){
                            if (Atkroll[1] <= Defroll[0])
                                return 3;
                            else
                                return 2;}

                    else if (dlength == 1){
                           if (Atkroll[2] > Defroll[0])
                                    return 4;
                            else
                                    return 5;}}

                if (alength == 2){
                    if (dlength == 2)
                        if (Atkroll[1] > Defroll[1]){
                            if (Atkroll[0] > Defroll[0])
                                return 1;
                            else
                                return 2;}
                        else if (Atkroll[1] <= Defroll[1]){
                            if (Atkroll[0] <= Defroll[0])
                                return 3;
                            else
                                return 2;}

                    else if (dlength == 1){
                           if (Atkroll[1] > Defroll[0])
                                    return 4;
                            else
                                    return 5;}}


                if (alength == 1){
                    if (dlength == 2)
                        if (Atkroll[0] > Defroll[1])
                                return 4;
                        else
                             return 5;

                    else if (dlength == 1){
                        if (Atkroll[0] > Defroll[0])
                                return 4;
                        else
                             return 5;}}

    return 0;
}



