#include <iostream>
using namespace std;

int main()
{
    int hours;

    cout << "Enter hours: ";
    cin >> hours;

    if (hours >= 9 && hours <= 18) {
        cout << "working";
    }

    else {
        cout << "leisure";
    }

    return 0;
}