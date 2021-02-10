#include "Bomber.h"

Bomber::Bomber()
{
   setA(getA()*2);
}

Bomber::~Bomber()
{
    cout<<"le bomber est decede"<<endl;
}

void Bomber::explosion(Zombie* cible){
        cible-> setV(cible->getV()-(getA()*3));
        Zombie::~Zombie;
}
