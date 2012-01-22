#include <iostream>
#include <fstream>

using namespace std;


void menu() {
 cout << "Menu:\n";
 cout << "1. Wybierz plik.\n";
 cout << "2. Zakoncz.\n";
 cout << endl;
}

void drukuj () {
cout << "Wprowadz nazwe pliku: ";
string nazwa_pliku;
cin >> nazwa_pliku;

ifstream plik_we(nazwa_pliku.c_str());
if (!plik_we.is_open()) {
cout << "Blad otwarcia pliku";
return;
}
cout << "Zawartosc pliku " << nazwa_pliku << ":" << endl;
string wiersz;
while (!plik_we.eof()) {
getline (plik_we, wiersz);
cout << wiersz << endl;
}
// druga opcja
 /*do {
char c = plik_we.get();
cout << c;
} while (!plik_we.eof());*/
cout << endl;
plik_we.close();
}

int main(int argc , char *argv[])
{
int loop = true;
int wybor;
while (loop) {
menu();
cin >> wybor;

switch (wybor) {
case 1: {
    drukuj();
    loop = true;
    break;
  } default:
  loop = false;
  cout << endl;
  }
}
}

