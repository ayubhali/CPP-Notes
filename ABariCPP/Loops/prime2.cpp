#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        
        if (n % i) {
            count++;
        }
    }

    if (count == 2) {
        cout << "it is a prime";
    }

    else {
        cout << "not a prime";
    }
    return 0;
}