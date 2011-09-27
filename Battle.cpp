
//Results of Battle// //1 = Atk Wins both rolls //2 = 1 loss on both sides // 3 = Def wins two // 4 = Atk wins 1 //5 Def wins 1

#include "battle.h"
#include "DiceRoll.h"


Battle::Battle(){

}


int Battle::Results(int Atkroll[], int Defroll[]){

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

    return 0;
}



