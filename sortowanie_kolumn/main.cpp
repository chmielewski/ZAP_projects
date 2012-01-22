#include <iostream>
#include <ctime>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{
    const double max = 100;
    const double min = -100;
    const int w = 5;
    const int k = 10;
    int array[w][k];
    srand(time(0));

    for (int i=0; i<w; i++) {
     for (int j=0; j<k; j++) {
     array[i][j] = min + (max - min + 1)*(rand())/double(RAND_MAX);
     cout << array[i][j] << "\t";
     }
     cout << endl;
    }
cout << endl << endl;
int kolumna_1, kolumna_2;
cout << "Wybierz 2 kolumny, ktore chcesz zamienic miejscami [0-9]:" << endl;
cout << "Kolumna 1: ";
cin >> kolumna_1;
cout << "Kolumna 2: ";
cin >> kolumna_2;
cout << endl << endl;
for (int i=0; i<w; i++) {
   int temp = array[i][kolumna_1];
   array[i][kolumna_1] = array[i][kolumna_2];
   array[i][kolumna_2] = temp;
 }
 for (int i=0; i<w; i++) {
     for (int j=0; j<k; j++) {
     cout << array[i][j] << "\t";
     }
     cout << endl;
    }

cout << endl << endl;
cout << "Sortowanie kolumn: ";
cout << endl << endl;

for (int t=0; t<k; t++) {
for (int i=0; i<w-1; i++) {
 int i_min = i;
 for (int j=i+1; j<w; j++) {
  if(array[j][t] < array[i_min][t])
   i_min = j;
 }
 int temp = array[i][t];
 array[i][t] = array[i_min][t];
 array[i_min][t] = temp;
}
}
for (int i=0; i<w; i++) {
     for (int j=0; j<k; j++) {
     cout << array[i][j] << "\t";
     }
     cout << endl;
}
}
