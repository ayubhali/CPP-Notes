#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    string str = to_string(n);

    reverse(str.begin(), str.end());

    cout << "The numbe reversed is: " << str << endl;

    return 0;
}



