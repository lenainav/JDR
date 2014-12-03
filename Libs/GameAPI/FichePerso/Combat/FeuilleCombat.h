#ifndef FEUILLECOMBAT_H
#define FEUILLECOMBAT_H

///Represente la feuille de combat

class FeuilleCombat
{
    public:
        FeuilleCombat();
        virtual ~FeuilleCombat();

        std::string TypeArmure;
        std::string TypeCasque;
        Argent CoutArmure;
        Argent PrixPtRepair;
        int Encombrement;

        //Modif d'armure
        De LameCourtes;
        De EpeeUM;
        De EpeeDM;
        De MasseUM;
        De HacheUM;
        De HacheDM;
        De Hast;
        De Arc;
        De Arbal;


        void chargerCorp(std::string path);

    protected:
    private:
};

#endif // FEUILLECOMBAT_H
