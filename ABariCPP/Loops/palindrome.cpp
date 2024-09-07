#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Palindrome() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    string str = to_string(n);
    string reversedStr = str;

    reverse(reversedStr.begin(), reversedStr.end());

    if (str == reversedStr) {
        cout << "It is a palindrome." << endl;
    } else {
        cout << "Not a palindrome." << endl;
    }
}

int main() {
    Palindrome();
    return 0;
}
