#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;


class Zombie
{
    public:
        Zombie();
        Zombie(int v, int a, string nom);

        ~Zombie();

    protected:

    private:
        int pv = 0;
        int attaque = 0;
        int vie = 0;
        string nom = "name";

        //PV
        int getV() const;
        void setV(int v);

        //NOM
        string getNom() const;
        void setNom(string n);

        //ATTACK
        int getA() const;
        void setA(int a);

        void showInfos() const;
};

#endif // ZOMBIE_H
