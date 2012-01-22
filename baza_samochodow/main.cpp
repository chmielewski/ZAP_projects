#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

struct Car {
    string marka;
    double cena;
    int rocznik;
    };

int main()
{
    int const n = 5;
    Car cars[n];
    for (int i=0; i<n; i++) {
    cout << "Wczytaj marke samochodu nr. " << i << ": ";
    cin >> cars[i].marka;
    cout << "Wczytaj cene samochodu nr. " << i << ": ";
    cin >> cars[i].cena;
    cout << "Wczytaj rocznik samochodu nr. " << i << ": ";
    cin >> cars[i].rocznik;
    cout << endl << endl;
    }
enum {
quit = 0,
price_sort = 1,
buildyear_sort = 2,
display = 3
};
int wybor;
bool x = false;
while (!x) {
cout << "Menu:\nPosortuj wedlug ceny: 1\nPosortuj wedlug rocznika: 2\nWyswietl: 3\nWyjdz: 0" << endl << endl;

cin >> wybor;

switch (wybor) {
case price_sort: {
 Car temp;
  for (int i=0; i<n-1; i++) {
   for (int j=0; j<n-1; j++) {
    if (cars[j+1].cena < cars[j].cena) {
    temp = cars[j];
    cars[j] = cars[j+1];
    cars[j+1] = temp;
    }
  }
 }
cout << "Posortowano wedlug ceny." << endl;
}
break;
case buildyear_sort: {
Car temp;
for (int i=0; i<n-1; i++) {
 for (int j=0; j<n-1; j++) {
 if (cars[j+1].rocznik < cars[j].rocznik) {
 cars[j] = temp;
 cars[j+1] = cars[j];
 cars[j] = temp;
 }
 }
  }
  cout << "Posortowano wedlug rocznika." << endl;
 }
 break;

 case display: {
 cout << endl << "Marka\t\tCena\t\tRocznik" << endl;
 for (int i=0; i<n; i++) {
  cout << cars[i].marka << "\t\t" << cars[i].cena << "\t\t" << cars[i].rocznik << "\t\t" << endl;
 }
 cout << endl;
 }
 break;
 case quit: {
  x = true;
  break;
 }
}
}
}
