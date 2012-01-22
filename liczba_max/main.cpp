#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Wprowadz liczbe powtorzen >=2: ";
    cin >> n;
    double max;
    double max_1;
    if (n>=2) {
    cout << "Wprowadz liczbe: ";
    double in;
    cin >> in;
    max = in;
    cout << "Wprowadz liczbe: ";
    cin >> in;
    if(in <= max) {
    max_1 = in;
    } else {
    max_1 = max;
    max = in;
    }
    for(int i=0; i<n-2; i++) {
    cout << "Wprowadz liczbe: ";
    cin >> in;
    if(in > max) {
     max_1 = max;
     max = in;
    } else if (in > max_1) {
    max_1 = in;
    }
    }
    } else {
    cout << "Wprowadz liczbe wieksza lub rowna 2.";
    return 0;
    }
    cout << "Najwieksza liczba to: " << max << endl;
    cout << "Druga najwieksza liczba to: " << max_1 << endl;

    if(max==max_1) {
    cout << "Obie liczby sa takie same." << endl;
    } else {
    cout << "Liczby nie sa takie same." << endl;
    }


}
