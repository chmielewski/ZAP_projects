#include <iostream>
#include <ctime>
#include <math.h>
#include <cstdlib>

using namespace std;

#define pi 3.1415

struct point3D {
double x,y,z;
};

int main()
{
    int const n = 100;
    point3D points[n];
    const double radius = 5;
    const point3D center_point = {10,7,5};

    point3D temp;

    srand(time(0));
    double r, alpha, phi;
    for (int i=0; i<n; i++) {
    r = radius*(rand()/double(RAND_MAX));
    alpha = 2*pi*(rand()/double(RAND_MAX));
    phi = 2*pi*(rand()/double(RAND_MAX));

    temp.x = r*cos(alpha)*cos(phi);
    temp.y = r*cos(alpha)*sin(phi);
    temp.z = r*sin(alpha);

    bool test = (sqrt(pow(temp.x,2)+pow(temp.y,2)+pow(temp.z,2)) < radius) ? true : false;
    cout << temp.x << "\t" << temp.y << "\t" << temp.z << "\t" << test << endl;

    points[i].x = temp.x + center_point.x;
    points[i].y = temp.y + center_point.y;
    points[i].z = temp.z + center_point.z;
    }

for(int i=0; i<n; i++) {
 int j=i;
temp = points[j];
double distance_i_to_center = sqrt(pow(points[i].x−center_point.x,2) + pow(points[i].y−center_point.y,2) + pow(points[i].z−center_point.z,2));
double distance_j_1_to_center = sqrt(pow(points[j−1].x−center_point.x,2) + pow(points[j−1].y−center_point.y,2) + pow(points[j−1].z−center_point.z,2));
 while (j>0 && distance_i_to_center < ditance_j_1_to_center) {
  points[j] = points[j-1];
  j=j-1;
  }
 points[j] = temp;
}


}
