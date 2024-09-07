#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter the number of elements of the array: ";
    int n;
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int max = numbers[0];

    for (int i = 0; i < n; i++) {
        if (numbers[i] > max) { 

            max = numbers[i];

        }
    }

    cout << "Max of the array is: " << max << endl;

    return 0;
}