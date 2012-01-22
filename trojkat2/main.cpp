#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    for(int i=0; i<k; i++) {
    for(int j=0; j<k-i-1; j++) {
    cout << " ";
    }

    for(int h=0; h<2*i+1; h++) {
    cout << "*";
    }
    cout << endl;
    }

}
