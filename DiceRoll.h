#ifndef DiceRoll_H
#define DiceRoll_H

#include "battle.h"

class DiceRoll: public Battle {
public:
    DiceRoll();
    int GetAtkArmies(int A);
    int GetDefArmies(int D);
    int Roll(int atk, int def);
};

#endif
