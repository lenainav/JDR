#ifndef FICHEPERSO_H
#define FICHEPERSO_H
/*
///-------Infos sur la structure----///

*Infos de base :
    Nom
    Race
    Classe
    Niveau
    Categorie
    XP










*/


///structure définissant l'alignement du personnage
struct Alignement
{
    std::string Nature;
    int Degre;
};

///Class servant d'interface du personnage regroupant toutes les infos de la fiche de perso
class FichePerso
{
    public:
        FichePerso();
        virtual ~FichePerso();

        std::string Nom;
        std::string Classe;
        std::string Race;
        int Niveau;



    protected:
    private:
};

#endif // FICHEPERSO_H
