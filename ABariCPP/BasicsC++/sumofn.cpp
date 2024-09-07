#include <iostream>
using namespace std;

int main()
{
    int n, sum;

    cout << "Enter n: ";

    cin >> n;

    sum = n * (n + 1)/2;

    cout << "The sum of first natural number "<< n << " is: " << sum;

    return 0;
}