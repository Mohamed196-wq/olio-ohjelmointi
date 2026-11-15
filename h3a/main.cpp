#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chef("Gordon Ramsay");

    chef.makeSalad();
    chef.makeSoup();

    cout << endl;
    ItalianChef italianChef("Anthony Bourdain");

    cout << "Kokin nimi: " << italianChef.getName() << endl;

    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    return 0;
}
