#ifndef Sector_H
#define Sector_H

#include "Territory.h"

class Sector {

    std::vector<Territory> _territories; // owns them strongly

public:

    std::vector<Territory>& getTerritories() { return _territories; }
    void setTerritories(std::vector<Territory>& territories) { _territories = territories; }

    int bonus;
}Europe, Africa, NorthAmerica, SouthAmerica, Austrialia, Asia;

#endif

void Terrstuff(){

//Sector Asia
{Asia.getTerritories().push_back(Afganistan);
Asia.getTerritories().push_back(China);
Asia.getTerritories().push_back(India);
Asia.getTerritories().push_back(Japan);
Asia.getTerritories().push_back(Irkutsk);
Asia.getTerritories().push_back(Kamchatka);
Asia.getTerritories().push_back(MiddleEast);
Asia.getTerritories().push_back(Mongolia);
Asia.getTerritories().push_back(Siam);
Asia.getTerritories().push_back(Siberia);
Asia.getTerritories().push_back(Ural);
Asia.getTerritories().push_back(Yakutsk);
}
//Sector Europe
{
Europe.getTerritories().push_back(UK);
Europe.getTerritories().push_back(Iceland);
Europe.getTerritories().push_back(NEurope);
Europe.getTerritories().push_back(Scandinavia);
Europe.getTerritories().push_back(SEurope);
Europe.getTerritories().push_back(Ukraine);
Europe.getTerritories().push_back(WEurope);
}
//Sector Africa
{
Africa.getTerritories().push_back(Congo);
Africa.getTerritories().push_back(EAfrica);
Africa.getTerritories().push_back(Egypt);
Africa.getTerritories().push_back(Madagascar);
Africa.getTerritories().push_back(NAfrica);
Africa.getTerritories().push_back(SAfrica);
}
//Sector NorthAmerica
{

NorthAmerica.getTerritories().push_back(Alaska);
NorthAmerica.getTerritories().push_back(Alberta);
NorthAmerica.getTerritories().push_back(CAmerica);
NorthAmerica.getTerritories().push_back(EasternUS);
NorthAmerica.getTerritories().push_back(Greenland);
NorthAmerica.getTerritories().push_back(NWT);
NorthAmerica.getTerritories().push_back(Ontario);
NorthAmerica.getTerritories().push_back(Quebec);
NorthAmerica.getTerritories().push_back(WesternUS);
}
//Sector SouthAmerica
{

SouthAmerica.getTerritories().push_back(Argentina);
SouthAmerica.getTerritories().push_back(Brazil);
SouthAmerica.getTerritories().push_back(Peru);
SouthAmerica.getTerritories().push_back(Venezuela);
}
//Sector Austrialia;
{
Austrialia.getTerritories().push_back(EAustralia);
Austrialia.getTerritories().push_back(Indonesia);
Austrialia.getTerritories().push_back(NewGuinea);
Austrialia.getTerritories().push_back(WAustralia);
}

{//Aisa

//Afganistan

Asia.getTerritories()[0].getNeighbours().push_back(&Asia.getTerritories()[1]);
Asia.getTerritories()[0].getNeighbours().push_back(&Asia.getTerritories()[2]);
Asia.getTerritories()[0].getNeighbours().push_back(&Asia.getTerritories()[6]);
Asia.getTerritories()[0].getNeighbours().push_back(&Asia.getTerritories()[10]);
Asia.getTerritories()[0].getNeighbours().push_back(&Europe.getTerritories()[5]);

//China

Asia.getTerritories()[1].getNeighbours().push_back(&Asia.getTerritories()[0]);
Asia.getTerritories()[1].getNeighbours().push_back(&Asia.getTerritories()[2]);
Asia.getTerritories()[1].getNeighbours().push_back(&Asia.getTerritories()[8]);
Asia.getTerritories()[1].getNeighbours().push_back(&Asia.getTerritories()[7]);
Asia.getTerritories()[1].getNeighbours().push_back(&Asia.getTerritories()[9]);
Asia.getTerritories()[1].getNeighbours().push_back(&Asia.getTerritories()[10]);

//India

Asia.getTerritories()[2].getNeighbours().push_back(&Asia.getTerritories()[0]);
Asia.getTerritories()[2].getNeighbours().push_back(&Asia.getTerritories()[1]);
Asia.getTerritories()[2].getNeighbours().push_back(&Asia.getTerritories()[6]);
Asia.getTerritories()[2].getNeighbours().push_back(&Asia.getTerritories()[8]);

//Irkustk, what the hell is this place

Asia.getTerritories()[3].getNeighbours().push_back(&Asia.getTerritories()[5]);
Asia.getTerritories()[3].getNeighbours().push_back(&Asia.getTerritories()[7]);
Asia.getTerritories()[3].getNeighbours().push_back(&Asia.getTerritories()[9]);
Asia.getTerritories()[3].getNeighbours().push_back(&Asia.getTerritories()[11]);

//Japan

Asia.getTerritories()[4].getNeighbours().push_back(&Asia.getTerritories()[5]);
Asia.getTerritories()[4].getNeighbours().push_back(&Asia.getTerritories()[7]);

//Kamchatka

Asia.getTerritories()[5].getNeighbours().push_back(&Asia.getTerritories()[3]);
Asia.getTerritories()[5].getNeighbours().push_back(&Asia.getTerritories()[4]);
Asia.getTerritories()[5].getNeighbours().push_back(&Asia.getTerritories()[7]);
Asia.getTerritories()[5].getNeighbours().push_back(&Asia.getTerritories()[11]);

//Middle East

Asia.getTerritories()[6].getNeighbours().push_back(&Asia.getTerritories()[0]);
Asia.getTerritories()[6].getNeighbours().push_back(&Asia.getTerritories()[2]);
Asia.getTerritories()[6].getNeighbours().push_back(&Europe.getTerritories()[5]);

//Mongolia

Asia.getTerritories()[7].getNeighbours().push_back(&Asia.getTerritories()[1]);
Asia.getTerritories()[7].getNeighbours().push_back(&Asia.getTerritories()[3]);
Asia.getTerritories()[7].getNeighbours().push_back(&Asia.getTerritories()[4]);
Asia.getTerritories()[7].getNeighbours().push_back(&Asia.getTerritories()[5]);
Asia.getTerritories()[7].getNeighbours().push_back(&Asia.getTerritories()[9]);

//Siam

Asia.getTerritories()[8].getNeighbours().push_back(&Asia.getTerritories()[1]);
Asia.getTerritories()[8].getNeighbours().push_back(&Asia.getTerritories()[2]);
Asia.getTerritories()[8].getNeighbours().push_back(&Austrialia.getTerritories()[1]);

//Siberia

Asia.getTerritories()[9].getNeighbours().push_back(&Asia.getTerritories()[1]);
Asia.getTerritories()[9].getNeighbours().push_back(&Asia.getTerritories()[3]);
Asia.getTerritories()[9].getNeighbours().push_back(&Asia.getTerritories()[7]);
Asia.getTerritories()[9].getNeighbours().push_back(&Asia.getTerritories()[10]);
Asia.getTerritories()[9].getNeighbours().push_back(&Asia.getTerritories()[11]);

//Ural

Asia.getTerritories()[10].getNeighbours().push_back(&Asia.getTerritories()[0]);
Asia.getTerritories()[10].getNeighbours().push_back(&Asia.getTerritories()[9]);
Asia.getTerritories()[10].getNeighbours().push_back(&Europe.getTerritories()[5]);

//Yakutsk

Asia.getTerritories()[11].getNeighbours().push_back(&Asia.getTerritories()[3]);
Asia.getTerritories()[11].getNeighbours().push_back(&Asia.getTerritories()[6]);
Asia.getTerritories()[10].getNeighbours().push_back(&Asia.getTerritories()[9]);
}

{//Europe
//UK

Europe.getTerritories()[0].getNeighbours().push_back(&Europe.getTerritories()[1]);
Europe.getTerritories()[0].getNeighbours().push_back(&Europe.getTerritories()[2]);
Europe.getTerritories()[0].getNeighbours().push_back(&Europe.getTerritories()[3]);
Europe.getTerritories()[0].getNeighbours().push_back(&Europe.getTerritories()[6]);

//Iceland

Europe.getTerritories()[1].getNeighbours().push_back(&Europe.getTerritories()[0]);
Europe.getTerritories()[1].getNeighbours().push_back(&Europe.getTerritories()[3]);
Europe.getTerritories()[1].getNeighbours().push_back(&NorthAmerica.getTerritories()[4]);

//North Eruope

Europe.getTerritories()[2].getNeighbours().push_back(&Europe.getTerritories()[0]);
Europe.getTerritories()[2].getNeighbours().push_back(&Europe.getTerritories()[3]);
Europe.getTerritories()[2].getNeighbours().push_back(&Europe.getTerritories()[4]);
Europe.getTerritories()[2].getNeighbours().push_back(&Europe.getTerritories()[5]);
Europe.getTerritories()[2].getNeighbours().push_back(&Europe.getTerritories()[6]);

//Scandinavia

Europe.getTerritories()[3].getNeighbours().push_back(&Europe.getTerritories()[0]);
Europe.getTerritories()[3].getNeighbours().push_back(&Europe.getTerritories()[1]);
Europe.getTerritories()[3].getNeighbours().push_back(&Europe.getTerritories()[2]);
Europe.getTerritories()[3].getNeighbours().push_back(&Europe.getTerritories()[5]);


//Southern Europe

Europe.getTerritories()[4].getNeighbours().push_back(&Europe.getTerritories()[2]);
Europe.getTerritories()[4].getNeighbours().push_back(&Europe.getTerritories()[5]);
Europe.getTerritories()[4].getNeighbours().push_back(&Europe.getTerritories()[6]);
Europe.getTerritories()[4].getNeighbours().push_back(&Africa.getTerritories()[2]);
Europe.getTerritories()[4].getNeighbours().push_back(&Africa.getTerritories()[4]);
Europe.getTerritories()[4].getNeighbours().push_back(&Asia.getTerritories()[6]);

//Ukraine

Europe.getTerritories()[5].getNeighbours().push_back(&Europe.getTerritories()[2]);
Europe.getTerritories()[5].getNeighbours().push_back(&Europe.getTerritories()[3]);
Europe.getTerritories()[5].getNeighbours().push_back(&Europe.getTerritories()[5]);
Europe.getTerritories()[5].getNeighbours().push_back(&Asia.getTerritories()[0]);
Europe.getTerritories()[5].getNeighbours().push_back(&Asia.getTerritories()[6]);
Europe.getTerritories()[5].getNeighbours().push_back(&Asia.getTerritories()[10]);

//Western Europe

Europe.getTerritories()[6].getNeighbours().push_back(&Europe.getTerritories()[0]);
Europe.getTerritories()[6].getNeighbours().push_back(&Europe.getTerritories()[2]);
Europe.getTerritories()[6].getNeighbours().push_back(&Europe.getTerritories()[4]);
Europe.getTerritories()[6].getNeighbours().push_back(&Africa.getTerritories()[4]);
}

{//Africa
//Congo

Africa.getTerritories()[0].getNeighbours().push_back(&Africa.getTerritories()[1]);
Africa.getTerritories()[0].getNeighbours().push_back(&Africa.getTerritories()[4]);
Africa.getTerritories()[0].getNeighbours().push_back(&Africa.getTerritories()[5]);

//East Africa

Africa.getTerritories()[1].getNeighbours().push_back(&Africa.getTerritories()[0]);
Africa.getTerritories()[1].getNeighbours().push_back(&Africa.getTerritories()[2]);
Africa.getTerritories()[1].getNeighbours().push_back(&Africa.getTerritories()[3]);
Africa.getTerritories()[1].getNeighbours().push_back(&Africa.getTerritories()[4]);
Africa.getTerritories()[1].getNeighbours().push_back(&Africa.getTerritories()[5]);
Africa.getTerritories()[1].getNeighbours().push_back(&Asia.getTerritories()[6]);

//Egypt

Africa.getTerritories()[2].getNeighbours().push_back(&Africa.getTerritories()[1]);
Africa.getTerritories()[2].getNeighbours().push_back(&Africa.getTerritories()[4]);
Africa.getTerritories()[2].getNeighbours().push_back(&Europe.getTerritories()[4]);
Africa.getTerritories()[2].getNeighbours().push_back(&Asia.getTerritories()[6]);

//Madagascar

Africa.getTerritories()[3].getNeighbours().push_back(&Africa.getTerritories()[1]);
Africa.getTerritories()[3].getNeighbours().push_back(&Africa.getTerritories()[5]);

//North Africa

Africa.getTerritories()[4].getNeighbours().push_back(&Africa.getTerritories()[0]);
Africa.getTerritories()[4].getNeighbours().push_back(&Africa.getTerritories()[1]);
Africa.getTerritories()[4].getNeighbours().push_back(&Africa.getTerritories()[2]);
Africa.getTerritories()[4].getNeighbours().push_back(&Europe.getTerritories()[4]);
Africa.getTerritories()[4].getNeighbours().push_back(&Europe.getTerritories()[6]);
Africa.getTerritories()[4].getNeighbours().push_back(&SouthAmerica.getTerritories()[2]);

//South Africa

Africa.getTerritories()[5].getNeighbours().push_back(&Africa.getTerritories()[0]);
Africa.getTerritories()[5].getNeighbours().push_back(&Africa.getTerritories()[1]);
Africa.getTerritories()[5].getNeighbours().push_back(&Africa.getTerritories()[3]);
}

{//North America
//Alaska

NorthAmerica.getTerritories()[0].getNeighbours().push_back(&NorthAmerica.getTerritories()[1]);
NorthAmerica.getTerritories()[0].getNeighbours().push_back(&NorthAmerica.getTerritories()[5]);
NorthAmerica.getTerritories()[0].getNeighbours().push_back(&Asia.getTerritories()[5]);

//Alberta

NorthAmerica.getTerritories()[1].getNeighbours().push_back(&NorthAmerica.getTerritories()[0]);
NorthAmerica.getTerritories()[1].getNeighbours().push_back(&NorthAmerica.getTerritories()[5]);
NorthAmerica.getTerritories()[1].getNeighbours().push_back(&NorthAmerica.getTerritories()[6]);
NorthAmerica.getTerritories()[1].getNeighbours().push_back(&NorthAmerica.getTerritories()[8]);

//Central America

NorthAmerica.getTerritories()[2].getNeighbours().push_back(&NorthAmerica.getTerritories()[3]);
NorthAmerica.getTerritories()[2].getNeighbours().push_back(&NorthAmerica.getTerritories()[8]);
NorthAmerica.getTerritories()[2].getNeighbours().push_back(&SouthAmerica.getTerritories()[3]);

//Eastern United States

NorthAmerica.getTerritories()[3].getNeighbours().push_back(&NorthAmerica.getTerritories()[2]);
NorthAmerica.getTerritories()[3].getNeighbours().push_back(&NorthAmerica.getTerritories()[6]);
NorthAmerica.getTerritories()[3].getNeighbours().push_back(&NorthAmerica.getTerritories()[7]);
NorthAmerica.getTerritories()[3].getNeighbours().push_back(&NorthAmerica.getTerritories()[8]);

//Greenland

NorthAmerica.getTerritories()[4].getNeighbours().push_back(&NorthAmerica.getTerritories()[5]);
NorthAmerica.getTerritories()[4].getNeighbours().push_back(&NorthAmerica.getTerritories()[6]);
NorthAmerica.getTerritories()[4].getNeighbours().push_back(&NorthAmerica.getTerritories()[7]);
NorthAmerica.getTerritories()[4].getNeighbours().push_back(&Europe.getTerritories()[1]);

//North West Territory

NorthAmerica.getTerritories()[5].getNeighbours().push_back(&NorthAmerica.getTerritories()[0]);
NorthAmerica.getTerritories()[5].getNeighbours().push_back(&NorthAmerica.getTerritories()[1]);
NorthAmerica.getTerritories()[5].getNeighbours().push_back(&NorthAmerica.getTerritories()[4]);
NorthAmerica.getTerritories()[5].getNeighbours().push_back(&NorthAmerica.getTerritories()[6]);

//Ontario

NorthAmerica.getTerritories()[6].getNeighbours().push_back(&NorthAmerica.getTerritories()[1]);
NorthAmerica.getTerritories()[6].getNeighbours().push_back(&NorthAmerica.getTerritories()[3]);
NorthAmerica.getTerritories()[6].getNeighbours().push_back(&NorthAmerica.getTerritories()[4]);
NorthAmerica.getTerritories()[6].getNeighbours().push_back(&NorthAmerica.getTerritories()[5]);
NorthAmerica.getTerritories()[6].getNeighbours().push_back(&NorthAmerica.getTerritories()[7]);
NorthAmerica.getTerritories()[6].getNeighbours().push_back(&NorthAmerica.getTerritories()[8]);

//Quebec

NorthAmerica.getTerritories()[7].getNeighbours().push_back(&NorthAmerica.getTerritories()[3]);
NorthAmerica.getTerritories()[7].getNeighbours().push_back(&NorthAmerica.getTerritories()[4]);
NorthAmerica.getTerritories()[7].getNeighbours().push_back(&NorthAmerica.getTerritories()[5]);

//Western United States

NorthAmerica.getTerritories()[8].getNeighbours().push_back(&NorthAmerica.getTerritories()[1]);
NorthAmerica.getTerritories()[8].getNeighbours().push_back(&NorthAmerica.getTerritories()[2]);
NorthAmerica.getTerritories()[8].getNeighbours().push_back(&NorthAmerica.getTerritories()[3]);
NorthAmerica.getTerritories()[8].getNeighbours().push_back(&NorthAmerica.getTerritories()[6]);
}

{//SouthAmerica
//Argentina

SouthAmerica.getTerritories()[0].getNeighbours().push_back(&SouthAmerica.getTerritories()[1]);
SouthAmerica.getTerritories()[0].getNeighbours().push_back(&SouthAmerica.getTerritories()[2]);

//Brazil

SouthAmerica.getTerritories()[1].getNeighbours().push_back(&SouthAmerica.getTerritories()[0]);
SouthAmerica.getTerritories()[1].getNeighbours().push_back(&SouthAmerica.getTerritories()[2]);
SouthAmerica.getTerritories()[1].getNeighbours().push_back(&SouthAmerica.getTerritories()[3]);
SouthAmerica.getTerritories()[1].getNeighbours().push_back(&Africa.getTerritories()[4]);

//Peru

SouthAmerica.getTerritories()[2].getNeighbours().push_back(&SouthAmerica.getTerritories()[0]);
SouthAmerica.getTerritories()[2].getNeighbours().push_back(&SouthAmerica.getTerritories()[1]);
SouthAmerica.getTerritories()[2].getNeighbours().push_back(&SouthAmerica.getTerritories()[3]);

//Venezuela

SouthAmerica.getTerritories()[3].getNeighbours().push_back(&SouthAmerica.getTerritories()[1]);
SouthAmerica.getTerritories()[3].getNeighbours().push_back(&SouthAmerica.getTerritories()[2]);
SouthAmerica.getTerritories()[3].getNeighbours().push_back(&NorthAmerica.getTerritories()[2]);
}

{//Australia
//Eastern Australia

Austrialia.getTerritories()[0].getNeighbours().push_back(&Austrialia.getTerritories()[2]);
Austrialia.getTerritories()[0].getNeighbours().push_back(&Austrialia.getTerritories()[3]);

//Indonesia

Austrialia.getTerritories()[1].getNeighbours().push_back(&Austrialia.getTerritories()[2]);
Austrialia.getTerritories()[1].getNeighbours().push_back(&Austrialia.getTerritories()[3]);
Austrialia.getTerritories()[1].getNeighbours().push_back(&Asia.getTerritories()[8]);

//New Guinea

Austrialia.getTerritories()[2].getNeighbours().push_back(&Austrialia.getTerritories()[0]);
Austrialia.getTerritories()[2].getNeighbours().push_back(&Austrialia.getTerritories()[3]);

//Western Austrialia

Austrialia.getTerritories()[3].getNeighbours().push_back(&Austrialia.getTerritories()[0]);
Austrialia.getTerritories()[3].getNeighbours().push_back(&Austrialia.getTerritories()[2]);

}
}
