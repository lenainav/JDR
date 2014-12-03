#ifndef PARTIECORP_H
#define PARTIECORP_H

#include <string>
#include <vector>

class PartieCorp
{
    public:
        PartieCorp();
        PartieCorp(std::string nom, std::vector<int> tch, std::string inf);
        virtual ~PartieCorp();

        std::string Nom;

        PartieCorp *Conteneur;
        std::vector<PartieCorp*> Contenu;

        std::vector<int> valeurToucher;
        std::string Infos;

        bool isTouch(int val);


    protected:
    private:
};

#endif // PARTIECORP_H
