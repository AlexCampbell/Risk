#ifndef Player_H
#define Player_H


class Player {

   std::vector<Territory*> _ownedTerritories; // just a pointer

   std::vector<Player> _players();
public:

    std::vector<Territory*>& getOwnedTerritories() { return _ownedTerritories; }
    void setOwnedTerritories(std::vector<Territory*>& ownedTerritories) { _ownedTerritories = ownedTerritories; }

    int renforcements;
    bool Attacking;
    bool Defending;

}Player1, Player2;

#endif

