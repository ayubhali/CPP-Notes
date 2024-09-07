#include <iostream>
using namespace std;

int main() {
    int a[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};

    int l = 0, h = 9, key, mid;

    cout << "Enter the key: ";
    cin >> key;

    while (l <= h) {
        mid = l + (h - l) / 2;  // This prevents overflow that might occur with (l+h)/2

        if (key == a[mid]) {
            cout << "Found at index: " << mid;
            return 0;
        }
        else if (key < a[mid]) {
            h = mid - 1;  // Update high pointer to mid-1
        }
        else {
            l = mid + 1;  // Update low pointer to mid+1
        }
    }

    cout << "Key not found";
    return 0;
}

//Olog(n)
