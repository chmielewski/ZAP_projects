#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    int max = 15;
    int min = (-15);
    int const k=10;
    int array[10][k];
    srand(time(0));
    for (int i=0; i<k; i++) {
     for (int j=0; j<10; j++) {
     array[i][j] = min + (max - min + 1)*(rand()/double(RAND_MAX));
     cout << array[i][j] << "\t";
     }
    }
cout << endl << endl;
/*for (int i=0; i<k; i++) {
 array[0][i] = 0;
}
for (int i=0; i<k; i++) {
array[9][i] = 0;
}
for (int i=0; i<k; i++) {
array[i][0] = 0;
}
for (int i=0; i<k; i++) {
array[i][9] = 0;
}
for (int i=0; i<k; i++) {
     for (int j=0; j<10; j++) {
         cout << array[i][j] << "\t";
     }
}*/
cout << endl << endl;
for (int i=1; i<k; i++) {
 array[0][k-i] = array[0][k-i-1];
}
for (int i=2; i<k; i++) {
array[k-i][9] = array[k-i-1][9];
}
for (int i=0; i<k-2; i++) {
array[9][i] = array[9][i+1];
}
for (int i=1; i<k-1; i++) {
array[i][0] = array[i+1][0];
}
for (int i=0; i<k; i++) {
     for (int j=0; j<10; j++) {
         cout << array[i][j] << "\t";
     }
}

}
