#include <iostream>

using namespace std;

int main()
{
int x;
int z;
cin >> x;
if (x<0) {
cout << "Liczba musi byc wieksza od zera";
return 0;
}
else if (x==0) {
z=0;
}
else if (x==1) {
z=1;
}
else {
int m=0;
int n=1;

for(int i=1; i<x; i++) {
z=m+n;
m=n;
n=z;
}
}

cout << "Liczba Fibonacciego dla " << x << " wynosi: " << z << endl;



}
