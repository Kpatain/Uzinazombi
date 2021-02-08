#include <iostream>
#include "Zombie.h"

using namespace std;

int main()
{
    Zombie jean(110,10, "jean");
    jean.showInfos();

    cout << "c'est pas ouf mais ça marche, enfin je crois" << endl;
    cout << "voici une blague de toto pour compencer" <<endl;
    cout << "Toto rentre de l’école, visiblement content de lui. Il dit à ses parents : Aujourd’hui, grâce à moi, la maîtresse nous a appris plein de mots nouveaux! C’est bien, mon fils, répond le père. Mais qu’as-tu fait pour ça ?" << endl;
    cout << "Oh, pas grand’chose! J’ai seulement mis trois ou quatre punaises sur sa chaise! " << endl;
}
