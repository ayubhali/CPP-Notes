#include <iostream>
using namespace std;

int main()
{
    char s1[100]; // Array for first input
    char s2[100]; // Array for second input
    
    cout << "Enter your name: ";
    cin.get(s1, 100);  // Reads up to 99 chars, newline remains in buffer
    cout << "Welcome " << s1 << endl;

    cin.ignore(); // Ignores characters left in buffer (including newline)

    cout << "Enter your name again: ";
    cin.get(s2, 100);  // Reads second input
    cout << "Welcome " << s2 << endl; // Corrected to display s2

    return 0;
}

// Note: cin.get() reads characters until newline or limit is reached, doesn't remove newline from buffer.
// cin.getline() is similar but also removes the newline from the buffer.
