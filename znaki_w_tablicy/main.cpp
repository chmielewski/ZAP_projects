#include <iostream>

using namespace std;

int main()
{
    int const n = 10;
    char array[n];
    char znak;
    int begin = 0;
    int end = 0;
    while (begin + end < n){
    cin >> znak;
    if ((znak >= 'a' && znak <= 'z') || (znak >= 'A' && znak <= 'Z')) {
    array[begin] = znak;
    begin++;
    } else {
    array[n-1-end] = znak;
    end++;
    }
    }

cout << endl;
for(int i=0; i<n; i++) {
cout << array[i] << endl;
}
int mala = 0;
int wielka = 0;
int cyfra = 0;
int pozostale = 0;

for(int i=0; i<n; i++) {
if ((array[i] >= 'a') && (array[i] <= 'z')) {
mala = mala + 1;
} else if ((array[i] >= 'A') && (array[i] <= 'Z')) {
wielka = wielka + 1;
} else if ((array[i] >= '0') && (array[i] <= '9')) {
cyfra = cyfra + 1;
} else {
pozostale = pozostale + 1;
}
}
cout << endl << endl;
cout << "Wczytano: " << mala << " malych liter." << endl;
cout << "Wczytano: " << wielka << " wielkich liter." << endl;
cout << "Wczytano: " << cyfra << " cyfr." << endl;
cout << "Wczytano: " << pozostale << " pozostalych znakow." << endl;
cout << endl << endl;
}
