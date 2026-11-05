#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

// Laskee ja tulostaa summan
void calcSum(int a, int b)
{
    cout << "Summa: " << a + b << endl;
}

// Laskee ja tulostaa osamaaran
void calcDiv(int a, int b)
{
    if (b == 0)
    {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    }
    else
    {
        cout << fixed << setprecision(2);
        cout << "Osamaara: " << static_cast<float>(a) / b << endl;
    }
}

// Palauttaa summan
int retSum(int a, int b)
{
    return a + b;
}

// Palauttaa osamaaran
float retDiv(int a, int b)
{
    if (b == 0)
    {
        throw runtime_error("jakaja ei saa olla nolla!");
    }

    return static_cast<float>(a) / b;
}

int main()
{
    int a, b;

    cout << "Sana ensimmainen luku: ";
    cin >> a;

    cout << "Sana toinen luku: ";
    cin >> b;

    // Kutsutaan funktioita
    calcSum(a, b);
    calcDiv(a, b);

    // Tulostetaan palautettu summa
    cout << "Palautettu summa: " << retSum(a, b) << endl;

    // Kasitellaan mahdollinen jakovirhe
    try
    {
        float result = retDiv(a, b);

        cout << fixed << setprecision(2);
        cout << a << "/" << b << " = " << result << endl;
    }
    catch (runtime_error& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
