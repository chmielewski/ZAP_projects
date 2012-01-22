#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

int rand_with_probability(double probability) {
  if(rand() < RAND_MAX*probability ) {
  return 1;
  }
  return 0;
}

int main()
{
   int const width = 10000;
   int const heigth = 10;

   int array[width][heigth];
   srand(time(0));

   for(int i=0; i<heigth-1; i++) {
     for(int j=0; j<width-1; j++) {
       double temp_probability = 0.9 - 0.1*i;
       array[j][i] = rand_with_probability(temp_probability);
     }
   }
   for (int j=0; j<width; j++) {
   array[j][heigth-1] = rand_with_probability(0.01);
   }

   for (int i=0; i<heigth; i++) {
    double x=0;
     for (int j=0; j<width; j++) {
     if (array[j][i]) {
     x=x+1;
     }
     }
     cout << i+1 << " " << x/double(width) << endl;
   }

   return 0;
}
