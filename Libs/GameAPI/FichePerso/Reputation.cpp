#include "Reputation.h"

Reputation::Reputation()
{
    //ctor
}

Reputation::~Reputation()
{
    //dtor
}

void Reputation::initReput()
{
    std::string cls [] = {"Noblesse", "Marchand", "Erudits", "Peuple", "Bas-fonds"};

    Reput.clear();

    for (int i = 0; i < 5; i++)
    {
        REPUT r;
        r.Cs = cls[i];
        r.Moins = r.Plus = 0;

        Reput.push_back(r);
    }
}

REPUT Reputation::getReputFromClass(std::string classe)
{
    for (int i = 0; i < Reput.size(); i++)
    {
        if (Reput.at(i).Cs == classe)
            return Reput.at(i);
    }
}

void Reputation::setReput(std::string nme, int valeur)
{
    for(int i = 0; i < Reput.size(); i++)
    {
        if (Reput.at(i).Cs == nme)
        {
            if (valeur < 0)
                Reput.at(i).Moins = valeur;
            else
                Reput.at(i).Plus = valeur;

            return;
        }
    }
}

void Reputation::setReput(std::string nme, int p, int m)
{
    for(int i = 0; i < Reput.size(); i++)
    {
        if (Reput.at(i).Cs == nme)
        {
            Reput.at(i).Plus = p;
            Reput.at(i).Moins = m;

            return;
        }
    }
}

void Reputation::setReput(REPUT r)
{
    for(int i =0; i < Reput.size(); i++)
    {
        if (Reput.at(i).Cs = r.Cs)
        {
            Reput.at(i) = r;
            return;
        }
    }

    Reput.push_back(r);
}

void Reputation::modifReput(std::string nme, int p, int m)
{
    for (int i = 0; i < Reput.size(); i++)
    {
        if (Reput.at(i).Cs == nme)
        {
            Reput.at(i).Plus += p;
            Reput.at(i).Moins += m;
            return;
        }
    }
}




