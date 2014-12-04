#ifndef TEMPSCMBT_H
#define TEMPSCMBT_H

struct TIME
{
    unsigned int Sec,
        Min,
        Hr;
};

struct DATE
{
    unsigned int Jour,
        Mois,
        Ans;
};

typedef TIME TIME;


class TempsCmbt
{
    public:
        TempsCmbt();
        virtual ~TempsCmbt();

        unsigned int Round;
        unsigned int Tour;

        TIME getTime();
        unsigned int getRiT();
        void addRound();

        void clear();

    protected:
    private:
};

#endif // TEMPSCMBT_H
