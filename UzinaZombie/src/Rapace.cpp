#include "Rapace.h"

Rapace::Rapace()
{
    setA(getA()/2);
    setV(getV()/2);
}

void Rapace::pichenette(Zombie* cible)
{
    cible->setV(cible->getV()-getA()/2);
    setV(getV+getV()/2);
}

Rapace::~Rapace()
{
}
