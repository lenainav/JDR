#ifndef DE_H
#define DE_H


class De
{
    public:
        De(std::string val);
        De(int val);
        De();
        virtual ~De();

        std::string valeur;
        int val;

        int lancer();

    protected:
    private:
};

#endif // DE_H
