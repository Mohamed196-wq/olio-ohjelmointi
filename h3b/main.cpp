#include <iostream>
#include "anima1.h"
#include "dog.h"

using namespace std;

int main()
{
    Animal animal;

    Dog dog;

    animal.callOut();

    Animal& koira = dog;

    koira.callOut();

    return 0;
}
