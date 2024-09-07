#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a , b , c;
    float root1, root2;
    cout << "Enter a, b , c: ";
    cin >> a >> b >> c;

    //Quadratic formula
    root1 = (-b + sqrt((b*b) -4 * a * c))/(2*a);
    root2 = (-b + sqrt((b*b) -4 * a * c))/(2*a);
    
    cout << "Roots are: " << root1 << " " << root2;

    return 0;
}
