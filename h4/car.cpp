#include "car.h"
#include <iostream>

using namespace std;

Car::Car()
{
    model = "";
    brand = "";
}

Car::Car(string m, string b)
{
    model = m;
    brand = b;
}

void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels()
{
    objWheel1 = Wheel(17, "kesarengas");
    objWheel2 = Wheel(17, "kesarengas");
    objWheel3 = Wheel(17, "kesarengas");
    objWheel4 = Wheel(17, "kesarengas");
}

string Car::getModel()
{
    return model;
}

void Car::setModel(string m)
{
    model = m;
}

string Car::getBrand()
{
    return brand;
}

void Car::setBrand(string b)
{
    brand = b;
}

void Car::printDetails()
{
    cout << "Auto: " << brand << " " << model << endl;

    cout << "Moottori: "
         << objEngine.getHorsepower() << " hp, "
         << objEngine.getDisplacement() << " L" << endl;

    cout << "Rengas 1: " << objWheel1.getSize()
         << " tuumaa, " << objWheel1.getType() << endl;

    cout << "Rengas 2: " << objWheel2.getSize()
         << " tuumaa, " << objWheel2.getType() << endl;

    cout << "Rengas 3: " << objWheel3.getSize()
         << " tuumaa, " << objWheel3.getType() << endl;

    cout << "Rengas 4: " << objWheel4.getSize()
         << " tuumaa, " << objWheel4.getType() << endl;
}
