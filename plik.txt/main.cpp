#include <iostream>
#include <cstdlib>
#include <fstream>


using namespace std;

bool isLetter(char c)
{
    if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        return true;
    }
    return false;
}

bool isNumber(char c)
{
    if (c>='1' && c<='9')
    {
        return true;
    }
    return false;
}

int main()
{
    string zawartosc = "abcDEF123v984tp4hbdifg8";
    ofstream plik_wy("chars.txt");
    plik_wy << zawartosc;
    plik_wy.close();

    ifstream plik_we("chars.txt");
    if ( !plik_we. is_open() )
    {
        cerr << "Blad otwarcia pliku \n";
    }
    else
    {
        int charsCounter = 0;
        int lettersCounter = 0;
        int numbersCounter = 0;

        //char temp;
        while (plik_we.good()) {
        char temp = char (plik_we.get());
        charsCounter++;
       // temp = plik_we.get();
         if (isLetter(temp)) {
             lettersCounter++;
         } else if (isNumber(temp)) {
             numbersCounter++;
         }
        }
        plik_we.close();

        cout << "Ilosc znakow w pliku chars.txt: " << charsCounter - 1 << "\n";
        cout << "Ilosc liter w pliku chars.txt: " << lettersCounter << "\n";
        cout << "Ilosc cyfr w pliku chars.txt: " << numbersCounter << "\n";
        return 0;
    }
}








