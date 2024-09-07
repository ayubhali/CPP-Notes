#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> numbers(n);

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];    
    }

    int sum = 0;
    for (auto num : numbers) {
        sum += num;
    }
    
    cout << "Sum: " << sum << endl;

    return 0;
}