#include <iostream>
using namespace std;

int main()
{
    int a[10], n = 10;

    cout  << "Enter numbers: ";

    for (int i = 0; i < n; i++) {  
        cin >> a[i];
    }

    cout << "Enter the Key you want to search: ";
    int key;
    cin >> key;

    for (int i = 0; i < n; i++) {

        if (key == a[i]) {
            cout << "found at index:  " << i;
            return 0;
        }
    }

    cout << "keys is not found: ";

    return 0;
}

//O(n)