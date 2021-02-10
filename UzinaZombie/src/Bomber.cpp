#include "Bomber.h"

Bomber::Bomber()
{
   setA(getA()*2);
}

Bomber::~Bomber()
{
    cout<<nom<<" decede"<<endl;
}

void Bomber::explosion(Zombie* cible){
        cible-> setV(cible->getPv()-(getA()*3));
        setV(0);
        Zombie::~Zombie;
}
