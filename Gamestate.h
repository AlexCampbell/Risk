#ifndef Gamestate_H
#define Gamestate_H

#include "Territory.h"
#include "Sector.h"

class Gamestate {

std::vector<Territory> _search;

public:

 std::vector<Territory>& getsearch() { return _search; }
    void setsearch(std::vector<Territory>& search) { _search = search; }

}OpenList;


void Gamestuff(){
OpenList.getsearch().insert (OpenList.getsearch().end(), Asia.getTerritories().begin(), Asia.getTerritories().end());
OpenList.getsearch().insert (OpenList.getsearch().end(), Africa.getTerritories().begin(), Africa.getTerritories().end());
OpenList.getsearch().insert (OpenList.getsearch().end(), Europe.getTerritories().begin(), Europe.getTerritories().end());
OpenList.getsearch().insert (OpenList.getsearch().end(), SouthAmerica.getTerritories().begin(), SouthAmerica.getTerritories().end());
OpenList.getsearch().insert (OpenList.getsearch().end(), Austrialia.getTerritories().begin(), Austrialia.getTerritories().end());
OpenList.getsearch().insert (OpenList.getsearch().end(), NorthAmerica.getTerritories().begin(), NorthAmerica.getTerritories().end());

}

#endif
