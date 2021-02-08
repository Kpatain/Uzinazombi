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
        vie = 0;
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
		vie = 0;
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
}

void Zombie::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getV() << endl;
	cout << "attaque : " << getA() << endl;

}


