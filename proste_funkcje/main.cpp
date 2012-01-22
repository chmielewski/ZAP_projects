#include <iostream>

using namespace std;

void printPiramid (int height) {
for (int i=0; i<=height; i++) {
  for (int j=0; j<height - i; j++) {
   cout << " ";
  }
   for (int k=0; k<(i*2)-1; k++) {
   cout << "*";
   }
  cout << endl;
}
}

double absolute (double liczba) {
if (liczba < 0) {
return (-liczba);
} else {
return liczba;
}
}

double power (double x, int y) {
 double temp = 1;
 for (int i=0; i<y; i++) {
 temp = temp*x;
 }
 return temp;
}

int main()
{
cout << power(3,4);

}
