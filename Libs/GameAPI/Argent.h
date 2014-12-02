#ifndef ARGENT_H
#define ARGENT_H

enum MONAIE
{
    MON_PO = 0,
    MON_PA = 1,
    MON_PB = 2,
    MON_PC = 3,
    MON_PF = 4
};


class Argent
{
    public:
        Argent(int po = 0, int pa = 0, int pb = 0, int pc = 0, int pf = 0);
        virtual ~Argent();

        int getPo();
        int getPa();
        int getPb();
        int getPc();
        int getPf();

        void setPo();
        void setPa();
        void setPb();
        void setPc();
        void setPf();

        Argent convert(int val, MONAIE typeVal, MONAIE typeObj);

    protected:
    private:

        int arg [5];
};

#endif // ARGENT_H
