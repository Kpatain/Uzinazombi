#include <iostream>
#include "Zombie.h"

using namespace std;

int main()
{
    Zombie jean(110,10, "jean");
    jean.showInfos();

    cout << "c'est pas ouf mais �a marche, enfin je crois" << endl;
    cout << "voici une blague de toto pour compencer" <<endl;
    cout << "Toto rentre de l��cole, visiblement content de lui. Il dit � ses parents : Aujourd�hui, gr�ce � moi, la ma�tresse nous a appris plein de mots nouveaux! C�est bien, mon fils, r�pond le p�re. Mais qu�as-tu fait pour �a ?" << endl;
    cout << "Oh, pas grand�chose! J�ai seulement mis trois ou quatre punaises sur sa chaise! " << endl;
}
