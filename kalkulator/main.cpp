#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Menu:" << endl;
    cout << "Dodaj 1" << endl;
    cout << "Pomnoz 2" << endl;
    cout << "Odejmij 3" << endl;
    cout << "Podziel 4" << endl;
    cout << "Wyjdz 5" << endl;
    cout << endl;
    int a;
    double x;
    double y;
    cin >> a;
    cout << endl;

    while (a-5) {
    cout << "Wprowadz pierwsza liczbe: ";
    cin >> x;
    cout << "Wprowadz druga liczbe: ";
    cin >> y;
    if (a==1) cout << "Wynik: " << x+y << endl;
    if (a==2) cout << "Wynik: " << x*y << endl;
    if (a==3) cout << "Wynik: " << x-y << endl;
    if (a==4) cout << "Wynik: " << x/y << endl;
    cout << endl;
    cout << "Menu:" << endl;
    cout << "Dodaj 1" << endl;
    cout << "Pomnoz 2" << endl;
    cout << "Odejmij 3" << endl;
    cout << "Podziel 4" << endl;
    cout << "Wyjdz 5" << endl;
    cout << endl;
    cin >> a;

    }





}
