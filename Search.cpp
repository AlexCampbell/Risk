#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>


#include "Gamestate.h"
#include "Player.h"

bool SearchStuff(int A, int D){

std::basic_string<char> TerrA;
std::basic_string<char> TerrB;

int x=0;
int y=20;

std::cout << "Please select Territory?: ";
std::cin >> TerrA;


for (x=0; x <= (OpenList.getsearch().size() - 1 ); x++) {

    if (OpenList.getsearch()[x].getName() == TerrA) {

            std::cout << "Please select 2nd Territory?: ";

            std::cin >> TerrB;

    if (TerrA == TerrB){

        std::cout << "Same territory" << std::endl;

            x=OpenList.getsearch().size();}

                std::cout << "Checking if " << TerrA << " and " << TerrB << " are neighbors." << std::endl;

    for (y=0; y <= (OpenList.getsearch()[x].getNeighbours().size() - 1); y++) {

        if (OpenList.getsearch()[x].getNeighbours()[y]->getName() == TerrB) {

                std::cout << TerrA << " and " << TerrB << " are neighbors.";

                    OpenList.getsearch()[x].units = A;

                    OpenList.getsearch()[x].getNeighbours()[y]->units = D;

                    return true;}

        if (y == (OpenList.getsearch()[x].getNeighbours().size()) - 1)

                std::cout << "They aren't neighbors. Please try again.";

                    return false;}
    }

    if (x == (OpenList.getsearch().size() - 1) & y == 15)

        std::cout << "Territory does not exist.";

            return false;}

return false;
}
