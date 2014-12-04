#ifndef ALEAT_H
#define ALEAT_H

#include <string>
#include <vector>

//class représentant l'aleat dans le jeu
//key de la forme xDv+a

class Aleat
{
    public:
        Aleat();
        virtual ~Aleat();

        int generate(std::string key);
        int generate(int nbr, int valD, int add);

    protected:
    private:

        std::vector<int> extractKey(std::string key);
};

#endif // ALEAT_H
