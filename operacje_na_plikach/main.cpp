#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const int n = 5;
    string wiersz;
    /*ofstream dobry_plik("dobry_plik.txt");
    if (!dobry_plik.is_open()) {
       cout << "Blad otwarcia pliku";
    }
    for (int i=0; i<n; i++) {
       cin >> wiersz;
       dobry_plik << wiersz << "\n";
    }
    dobry_plik.close();*/

    ifstream dobry_plik("dobry_plik.txt");
    ofstream krotki_plik("krotki_plik.txt");
    ofstream dlugi_plik("dlugi_plik.txt");

    string line;
    while (!dobry_plik.eof()) {
       getline (dobry_plik, line);
       if (line.length() < 5) {
          krotki_plik << line << "\n";
       } else {
           dlugi_plik << line << "\n";
       }
    }
    dobry_plik.close();
    krotki_plik.close();
    dlugi_plik.close();
}
