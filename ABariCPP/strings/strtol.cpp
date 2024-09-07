#include <iostream>
#include <cstring>
#include <stdlib.h> // Include for strtol and strtof functions
using namespace std;

int main()
{
    char s1[10] = "235";  // String representing a long integer
    char s2[10] = "54.78"; // String representing a floating-point number

    // Convert s1 to a long integer
    // strtol(str, endptr, base) - converts a string to a long integer
    long int x = strtol(s1, NULL, 10); // The third parameter specifies the number base, 10 for decimal

    // Convert s2 to a float
    // strtof(str, endptr) - converts a string to a float
    float y = strtof(s2, NULL); // Converts s2 to a floating-point number

    // Optional: Output the converted values
    cout << "Integer: " << x << endl;
    cout << "Float: " << y << endl;

    return 0;
}
