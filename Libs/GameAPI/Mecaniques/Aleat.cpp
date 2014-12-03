#include "Aleat.h"
#include <cstdlib>
#include <ctime>

Aleat::Aleat()
{
    //ctor
}

Aleat::~Aleat()
{
    //dtor
}

int Aleat::generate(std::string key)
{
    std::vector<int> kest = extractKey(key);
    return generate(kest.at(0), kest.at(1), kest.at(2));
}

int Aleat::generate(int nbr, int valD, int add)
{
    int res = 0;

    for (int i = 0; i < nbr; i++)
        res += rand() % valD;

    return res + add;
}

std::vector<int> Aleat::extractKey(std::string key)
{
    std::vector<int> kest;
    std::string tmp = "";
    int pos = 0, state = 0;

    while (pos < key.size())
    {
        if (key.at(pos) == 'D' || key.at(pos) == '+')
        {
            kest.push_back(atoi(tmp.c_str()));
            tmp.clear();
        }
        else
        {
            tmp.push_back(key.at(pos));
        }

        pos++;
    }

    if (tmp != "" && kest.size() < 3)
    {
        kest.push_back(atoi(tmp.c_str()));
        tmp.clear();
    }

    while (kest.size() < 3)
        kest.push_back(0);
}
