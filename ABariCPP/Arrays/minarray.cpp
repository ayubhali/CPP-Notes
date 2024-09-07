#include <iostream>
using namespace std;

int main() {
    int arr[] = {30, 20, 50, 10, 40}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    // Initialize min with the first element of the array
    int min = arr[0];

    // Iterate through the array
    for (int i = 1; i < n; i++) {
        // Update min if a smaller element is found
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Minimum number in the array is: " << min << endl;

    return 0;
}
