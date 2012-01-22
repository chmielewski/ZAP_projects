#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main( int argc , char *argv[] )
{
  const int n = 5;
  cout << "Wprowadz nazwe pliku: " << endl;
  string fileName;
  cin >> fileName;

  ofstream plik_wy(fileName.c_str());
  if(!plik_wy.is_open()) {
  cout << "Blad otwarcia pliku";
  }
  string line;
  for (int i=0; i<n; i++) {
  getline (cin,line);
  plik_wy << line << endl;
  }
  plik_wy.close();

  ifstream file (fileName.c_str());
  if (!file.is_open()) {
  cout << "Blad otwarcia pliku";
  }

  ofstream wyniki("results.txt");
  if (!wyniki.is_open()) {
  cout << "Blad otwarcia pliku";
  }
do {
getline (file , line);
if (line[0] >= 'A' && line[0] <= 'Z') {
wyniki << line;
}
} while (!file.eof());

wyniki.close();
file.close();
return 0;
}
