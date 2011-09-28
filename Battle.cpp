
//Results of Battle// //1 = Atk Wins both rolls //2 = 1 loss on both sides // 3 = Def wins two // 4 = Atk wins 1 //5 Def wins 1

#include "battle.h"
#include "DiceRoll.h"
#include <iostream>
using namespace std;

Battle::Battle(){

}


int Battle::Results(std::vector<int>& Atkroll, std::vector<int>& Defroll){


                if (Atkroll.size() == 3){
                    if (Defroll.size() == 2)
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

                    else if (Defroll.size() == 1){
                           if (Atkroll[2] > Defroll[0])
                                    return 4;
                            else
                                    return 5;}}

                if (Atkroll.size() == 2){
                    if (Defroll.size() == 2)
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

                    else if (Defroll.size() == 1){
                           if (Atkroll[1] > Defroll[0])
                                    return 4;
                            else
                                    return 5;}}


                if (Atkroll.size() == 1){
                    if (Defroll.size() == 2)
                        if (Atkroll[0] > Defroll[1])
                                return 4;
                        else
                             return 5;

                    else if (Defroll.size() == 1){
                        if (Atkroll[0] > Defroll[0])
                                return 4;
                        else
                             return 5;}}

    return 0;
}



