#include "PartieCorp.h"

PartieCorp::PartieCorp()
{
    //ctor
    Nom = "Unknow";
    Conteneur = NULL;
    for (int i(0); i < 6; i++)
        valeurToucher.push_back(i);
    Infos = "No informations avaible";
}

PartieCorp::PartieCorp(std::string nom, std::vector<int> tch, std::string inf)
{
    Nom = nom;
    Conteneur = NULL;
    for (int i(0); i < 6; i++)
        valeurToucher.push_back(tch.at(i));
    Infos = inf;

}

PartieCorp::~PartieCorp()
{
    //dtor
}

bool PartieCorp::isTouch(int val)
{
    for (int i = 0; i < valeurToucher.size(); i++)
    {
        if(valeurToucher.at(i) == val)
            return true;
    }

    return false;
}
