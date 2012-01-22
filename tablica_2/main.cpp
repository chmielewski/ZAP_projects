#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int max = 15;
    int min = -15;
    int const k = 10;
    int A[10][k];
    srand(time(0));

    double sum = 0;
    int n = 0;
    for(int i=0; i<10; i++) {
    for(int j=0; j<k; j++) {
    A[i][j] = min + (max - min + 1)*(rand()/double(RAND_MAX));
    cout << A[i][j] << "\t";
    if (A[i][j] > 0) {
        sum = sum + A[i][j];
        n = n + 1;
    }
    }
    cout << endl;
    }
 double srednia = sum/n;
 cout << endl << endl;
 cout << "Srednia aryt. wyrazow wiekszych od zera wynosi: " << srednia << endl;
 cout << endl << endl;

for (int j=0; j<10; j++) {
if (A[0][j] > srednia) {
A[0][j] = 0;
}
}
for (int j=0; j<10; j++) {
if (A[9][j] > srednia) {
A[0][j] = 0;
}
}
for (int i=0; i<10; i++) {
if (A[i][0] > srednia) {
A[0][i] = 0;
}
}
for (int i=0; i<10; i++) {
if (A[i][9] > srednia) {
A[0][i] = 0;
}
}
for (int i=0; i<10; i++) {
for (int j=0; j<10; j++){
cout << A[i][j] << "\t";
}
cout << endl;
}


}



