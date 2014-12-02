#ifndef PARTIECORP_H
#define PARTIECORP_H


class PartieCorp
{
    public:
        PartieCorp();
        virtual ~PartieCorp();

        std::string Nom;

        PartieCorp *Conteneur;
        std::vector<PartieCorp*> Contenu;

        std::vector<int> valeurToucher;

        bool isTouch(int val);

    protected:
    private:
};

#endif // PARTIECORP_H
