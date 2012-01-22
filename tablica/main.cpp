#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

int main()

{
    int i;
    int ile1;
    int suma;
    const int rozmiar=2000;
    srand(time(0));
    int array[rozmiar];
    for(i=0; i<rozmiar; i++) {
    array[i] = (rand()%6000) - 3000;
    //suma
    suma=0;
    suma = suma + array[i];
    }
    //ile wiekszych od 0
    ile1=0;
    for(i=0; i<rozmiar; i++) {
    if(array[i]>0) ile1++;
    }
    //ile mniejszych od -1000
    int ile2;
    ile2=0;
    for(i=0; i<rozmiar; i++) {
    if(array[i]<-1000) ile2++;
    }
    int x=0;
    for (i=0; i<rozmiar/2; i++) {
    x=x+array[i];
    }
    int y=0;
    for (i=1000; i<rozmiar; i++) {
    y=y+array[i];
    }

    cout << "Suma: " << suma << endl;
    cout << "Liczba wszystkich elementow wiekszych od 0: " << ile1 << endl;
    cout << "Liczba wszystkich elementów mniejszych od -1000: " << ile2 << endl;
    cout << "Srednia wartosc ze wszystkich elementow wynosi: " << suma/double(rozmiar) << endl;
    cout << "Srednia wartosc elementow z indeksem od 0 do 999 wynosi: " << x/(double(rozmiar/2)) << endl;
    cout << "Srednia wartosc elementow z indeksem od 1000 do 1999 wynosi: " << y/(double(rozmiar/2)) << endl;
}
