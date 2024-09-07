#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter the number of elements of your array: ";
    int n;
    cin >> n;

    cout << "Enter the elements of the array: ";

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << "Enter the Key you wish to search: ";
    int key;
    cin >> key;

    for (int i = 0; i < n; i++) {

        if (key == numbers[i]) {
            cout << "Key has been found at index: " << i;
            return 0;
        }
    }

    cout << "Key has not been found: ";

    return 0;
}