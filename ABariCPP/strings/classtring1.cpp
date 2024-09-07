#include <iostream>
#include <string> // Include the string header for using the string class
using namespace std;

int main()
{
    string str; // Declare a string object 'str'. The string class in C++ is a dynamic array of characters.

    // Prompt the user to enter a string
    cout << "Enter a string: ";

    // Use getline to read a line of text into 'str'
    // getline reads an entire line from the input stream (cin) into the string 'str',
    // including whitespace characters until a newline '\n' is encountered.
    getline(cin, str);

    // Output the string entered by the user
    cout << "You entered: " << str << endl;

    return 0;
}
