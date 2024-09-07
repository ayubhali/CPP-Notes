#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string str; // Declare a string object named 'str'

    cout << "Enter a string: "; // Prompt the user to enter a string

    // Read a line of text into 'str'
    // getline reads an entire line from standard input (cin) into the string 'str',
    // including whitespace until a newline '\n' is encountered.
    getline(cin, str);

    // Output the string entered by the user
    cout << str << endl; // endl adds a newline after printing 'str'

    return 0;
}
