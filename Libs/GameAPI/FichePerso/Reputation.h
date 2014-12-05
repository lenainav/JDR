#ifndef REPUTATION_H
#define REPUTATION_H

#include <string>
#include <vector>


struct REPUT
{
    std::string Cs;
    int Plus;
    int Moins;
};
typedef REPUT REPUT;

class Reputation
{
    public:
        Reputation();
        virtual ~Reputation();

        Reputation* LieuConteneur;
        std::vector<Reputation*> SousLieux;

        std::string NomLieu;

        std::vector<REPUT> Reput;


        void setReput(std::string nme, int valeur);
        void setReput(std::string nme, int p = 0, int m = 0);
        void setReput(REPUT r);

        void modifReput(std::string nme, int p = 0, int m = 0);

        REPUT getReputFromClass(std::string classe);


    protected:
    private:

        void initReput();
};

#endif // REPUTATION_H
