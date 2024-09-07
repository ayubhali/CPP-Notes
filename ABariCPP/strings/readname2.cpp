#include <iostream>
using namespace std;

int main()
{
    char s[20]; // 19 characters and 1 character
    
    cout << "Enter your name: ";
    
    cin.get(s, 20);

    cout << "Welcome " << s << endl;

    return 0;
}