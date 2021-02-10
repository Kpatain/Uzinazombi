#include <iostream>
#include "Zombie.h"
#include "Bomber.h"

using namespace std;

int main()
{
    Bomber jean;
    Zombie jeanne(100,10, "jeanne");

    jeanne.showInfos();

    jean.explosion(&jeanne);
}
