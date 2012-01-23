#ifndef Territory_H
#define Territory_H

class Territory {

    std::vector<Territory*> _neighbours;
    std::basic_string<char> _name;

public:

    std::vector<Territory*>& getNeighbours() { return _neighbours; }
    void setNeighbours(std::vector<Territory*>& neighbours) { _neighbours = neighbours; }

    Territory(std::basic_string<char> name): _name(name) { }
    std::basic_string<char>& getName() { return _name; }
    void setName(std::basic_string<char> name) { _name = name; }

    int units;

};
Territory Afganistan("Afganistan");
Territory China("China");
Territory India("India");
Territory Irkutsk("Irkutsk");
Territory Japan("Japan");
Territory Kamchatka("Kamchatka");
Territory MiddleEast("MiddleEast");
Territory Mongolia("Mongolia");
Territory Siam("Siam");
Territory Siberia("Siberia");
Territory Ural("Ural");
Territory Yakutsk("Yakutsk");
//Europe
Territory UK("UnitedKingdom");
Territory Iceland("Iceland");
Territory NEurope("NorthernEurope");
Territory Scandinavia("Scandinavia");
Territory SEurope("Sothern Europe");
Territory Ukraine("Ukraine");
Territory WEurope("WesternEurope");
//Africa
Territory Congo("Congo");
Territory EAfrica("EastAfrica");
Territory Egypt("Egypt");
Territory Madagascar("Madagascar");
Territory NAfrica("NorthAfrica");
Territory SAfrica("SouthAfrica");
//NA
Territory Alaska("Alaska");
Territory Alberta("Alberta");
Territory CAmerica("CentralAmerica");
Territory EasternUS("EasternUS");
Territory Greenland("Greenland");
Territory NWT("NWTerritory");
Territory Ontario("Ontario");
Territory Quebec("Quebec");
Territory WesternUS("WesternUS");
//SA
Territory Argentina("Argentina");
Territory Brazil("Brazil");
Territory Peru("Peru");
Territory Venezuela("Venezuela");
//Australia
Territory EAustralia("EasternAustralia");
Territory Indonesia("Indonesia");
Territory NewGuinea("NewGuinea");
Territory WAustralia("WesternAustralia");

#endif


