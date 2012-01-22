#include <iostream>

using namespace std;

int main()
{
    int const k = 10;
    double array[k][k];
    int n = 1;
    for(int x=0; x<k; x++) {
    for(int y=0; y<k; y++) {
    array[x][y] = (5*n)/double(n+1);
    n++;
    cout << array[x][y] << "\t";
    }
    cout << endl;
    }
double sum = 0;
for(int x=0; x<k; x++) {
  sum += array[x][x] + array[x][9-x];
}
cout << endl << endl;
cout << "Suma wartosci z przekatnych tablicy wynosi: " << sum << endl << endl;

 for (int i=0; i<(k/2); i++) {
 double przed = array[i][i];
 array[i][i] = array[k-1-i][k-1-i];
 array[k-1-i][k-1-i] = przed;

 przed = array[i][k-1-i];
 array[i][k-1-i] = array[k-1-i][i];
 array[k-1-i][i] = przed;
 }
cout << endl << endl;
for (int x=0; x<k; x++) {
for (int y=0; y<k; y++) {
cout << array[x][y] << "\t";
}
cout << endl;
}
double const a = 3;
double const b = 4.5;
int elementy = 0;
for(int x=0; x<k; x++) {
for(int y=0; y<k; y++) {
if(y>x && x+y<9 && array[x][y]>=a && array[x][y]<=b) {

elementy++;

}
}
}
cout << endl << endl;
cout << "liczba elementow z przedzialu <a,b> znajdujacych sia nad obiema przekatnymi : " << elementy << endl << endl;

}
