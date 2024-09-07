#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "Good";   // Initialize s1 with "Good"
    char s2[20] = " Morning"; // Initialize s2 with " Morning"

    strcat(s1,s2);

    // Append the first 3 characters of s2 to s1
    // strncat(destination, source, number_of_characters)
    //strncat(s1, s2, 3); // Only the first 3 characters of s2 will be concatenated to s1

    cout << s1 << endl; // Prints "Good Morning"

    return 0;
}

