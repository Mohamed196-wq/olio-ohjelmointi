#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    Car(string b, string m, int y)
    {
        brand = b;
        model = m;
        yearModel = y;
    }
    void printData() const
    {
        cout << "Merkki: " << brand << endl;
        cout << "Malli: " << model << endl;
        cout << "Vuosi: " << yearModel << endl;
    }
};
int main()
{
    vector<Car> carList;
    carList.emplace_back("Toyota", "Corolla", 2020);
    carList.emplace_back("BMW", "X5", 2022);
    carList.emplace_back("Volvo", "XC60", 2021);
    cout << "Toinen auto:" << endl;
    carList[1].printData();

    cout << endl;
    cout << "Kaikki autot:" << endl;

    for (const Car& autoOlio : carList)
    {
        autoOlio.printData();
        cout << endl;
    }

    return 0;
}

