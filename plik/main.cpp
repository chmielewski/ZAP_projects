#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{

    ofstream plik_wy("chars.txt");
      if(!plik_wy.is_open()) {
        cerr << "Blad otwarcia pliku\n";
      } else {
        plik_wy << "abcd123\n";
    }
    plik_wy.close();

    ifstream plik_we("chars.txt");
    if(!plik_we.is_open()) {
    cerr << "Blad otwarcia pliku/n";
    } else {
        //while(plik_we.good()) {
        //char c = char (plik_we.get());
       // if (plik_we.good()) {
       // cout << c;
        //}
        //}
     string temp;
     while (!plik_we.eof()) {
     getline(plik_we,temp);
     cout << temp;
     }
    }




}
