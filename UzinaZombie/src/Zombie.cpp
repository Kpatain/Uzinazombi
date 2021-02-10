#include "Zombie.h"

Zombie::Zombie()
{
    vie = 100;
    attaque = 10;
    nom = "sans nom";
}

Zombie::Zombie(int v, int a, string n)
{
    if (v > 100){
        cout << n << " a trop de vie, Zombie mort" << endl;
        Zombie::~Zombie;
    }

    else{
        vie = v;
    };

    attaque = a;
    nom = n;
}

Zombie::~Zombie()
{
    cout<<nom<<" decede"<<endl;
}

int Zombie::getV() const
{
	return vie;
}

void Zombie::setV(int v) {
	if (v < 0) {
		cerr << "pv non autorise" << endl;
		Zombie::~Zombie;
	}
	else {
		vie = v;
	}
}

string Zombie::getNom() const
{
	return nom;
}

void Zombie::setNom(string n)
{
	nom = n;
}

int Zombie::getA() const
{
	return attaque;
}

void Zombie::setA(int a)
{
	if (a < 0) {
		attaque = 0;
	}
	else{
        attaque = a;
	}
}

void Zombie::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getV() << endl;
	cout << "attaque : " << getA() << endl;

}

void Zombie::attack(Zombie* cible){
    if(cible->getV() < 0){
            cout<<"deja mort"<<endl;
    }
    else{
        cible->setV(cible->getV()-attaque);
        if(cible->getV()<=0){
            cible->setV(0);
            cible->~Zombie();
        }
    }
}



