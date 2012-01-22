#include <iostream>

using namespace std;

int main()
{
 string alphabet = "abcdefghijklmnopqrstuvwxyz";
 char letters[100];
 cout << "alphabet length: " << alphabet.length() << endl;
 for(int i=0; i<100; i++) {
   letters[i] = alphabet[i%alphabet.length()];
   }
 for(int i=0; i<100; i++) {
 cout << letters[i] << endl;
 }

}
