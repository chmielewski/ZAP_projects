#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   int array[10];
   int const max = 20;
   int const min = 0;
   srand(time(0));
   cout << "Nowa gra: 1" << endl;
   cout << "Wyjdz: 2" << endl;
   cout << endl;
   cout << "Wybierz [1,2]" << endl;
   int wybor;
   cin >> wybor;
   if (wybor == 1) {
   cout << "Losowanie:" << endl;
   for(int i=0; i<10; i++) {
   array[i] = min + (max - min + 1)*(rand()/double(RAND_MAX));
   //cout << array[i] << endl;
   } for(int t = 0; t<3; t++) {
   cout << "Wybierz liczbe [0,20]: ";
   int num;
   cin >> num;
   bool found = false;
   for(int i=0; i<10; i++) {
   if (num == array[i]) {
   found = true;
   break;
   }
   }
   if (found) {
   cout << "Trafiles." << endl;
   break;
   } else {
   cout << "Pudlo, probuj dalej." << endl;
   }
   }
   cout << endl << endl;

   } else {
   cout << "Koniec" << endl;
   }



}
