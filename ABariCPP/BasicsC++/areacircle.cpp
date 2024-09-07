#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()

{
    float radius, area;

    cout << "Enter the Radius: ";
    cin >> radius;

    area = M_PI * radius * radius;

    cout << "Area is: " << area << endl;

    return 0;
}