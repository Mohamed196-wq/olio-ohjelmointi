#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    Car car("Corolla", "Toyota");

    car.setEngine();
    car.setWheels();

    car.printDetails();

    return 0;
}
