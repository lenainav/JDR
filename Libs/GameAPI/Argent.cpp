#include "Argent.h"

#include <cmath>

Argent::Argent(int po, int pa, int pb, int pc, int pf)
{
    //ctor
    arg[0] = po;
    agr[1] = pa;
    agr[2] = pb;
    agr[3] = pc;
    agr[4] = pf;
}

Argent::~Argent()
{
    //dtor
}

Argent Argent::convert(Argent val, MONAIE typeVal, MONAIE typeObj)
{
    int diffType = typeVal - typeObj;
    Argent retours;

    if (typeVal == typeObj)
        return val;

    if (abs(diffType) > 1)
    {
        if (diffType < 0)
            return convert(val, typeVal, MONAIE(typeVal +1));
        else
            return convert(val, typeVal, MONAIE(typeVal -1));
    }

    if (diffType < 0) //passage vers un type moins important (pa -> pf)
    {

    }
    else //pf ->pa
    {

    }
}
