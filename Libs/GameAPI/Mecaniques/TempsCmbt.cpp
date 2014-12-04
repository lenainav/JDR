#include "TempsCmbt.h"

TempsCmbt::TempsCmbt()
{
    //ctor
    clear();
}

TempsCmbt::~TempsCmbt()
{
    //dtor
}

TIME TempsCmbt::getTime()
{
    TIME t;
    t.Sec =  (Round * 6);
    t.Min = (t.Sec - (t.Sec % 60)) / 60;
    t.Hr = (t.Min - (t.Min % 24)) / 24;

    t.Sec = t.Sec % 60;
    t.Min = t.Min % 60;
    t.Hr = t.Hr % 24; //si t.Hr > 24 c'est qu'il y a un pb. Il s'agit surment d'un très gros combat mais je pense que tout le monde serait mort d'épuisement avant

    return t;
}

unsigned int TempsCmbt::getRiT()
{
    return Round % 100;
}

void TempsCmbt::addRound()
{
    Round++;

    if (Round > 100)
        Tour++;
}

void TempsCmbt::clear()
{
   Round = Tour = 1;
}
