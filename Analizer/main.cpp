#include <iostream>
#include <fstream>
using namespace std;



int main()
{
  //ofstream plik_wy("jakis_plik.txt");
  //plik_wy << "asdf" << "\n" << "asdf";
  //plik_wy.close();

  int charsCounter = 0;
  int linesCounter = 0;
  string line;
  char c;
  ifstream plik_we("jakis_plik.txt");
  if (!plik_we.is_open()) {
  cerr << "Blad otwarcia pliku\n";
  } else {
     while (plik_we.good()) {
      charsCounter++;
      c = char (plik_we.get());
      //cout << c;
    }
  }

  ifstream plik_we1("jakis_plik.txt");
  if (!plik_we1.is_open()) {
  cerr << "Blad otwarcia pliku\n";
  } else {
      while (plik_we1.good()) {
 linesCounter++;
 getline(plik_we1,line) ;
      }
  }

  cout << "Ilosc znakow w jakis_plik: " << charsCounter  << endl;
  cout << "Rozmiar jakis_plik wynosi: " << charsCounter  << "B" << endl;
  cout << "Ilosc linii w jakis_plik: " << linesCounter << endl;
}
