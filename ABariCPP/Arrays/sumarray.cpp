#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;

    for (auto elemnt  : arr) {      
        cout << elemnt << " ";
    }

    return 0;
}

