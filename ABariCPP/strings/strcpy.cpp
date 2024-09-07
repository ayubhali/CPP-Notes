#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "Good"; // Initialize s1 with the string "Good"
    char s2[20] = "Morning"; // Initialize s2 with the string "Morning"

    // Copy the contents of s1 into s2
    // strcpy(destination, source) - Copies the source string into the destination, including the null terminator
    strcpy(s2, s1);

    // After copying, s2 contains "Good" and s1 remains unchanged.
    cout << s2 << endl; // Prints "Good", which is the new content of s2

    return 0;
}

// Note about strncpy:
// strncpy(destination, source, num) is similar to strcpy but copies at most 'num' characters.
// If the length of 'source' is less than 'num', additional null characters are added to 'destination' 
// until a total of 'num' characters are written. It ensures that no more than 'num' characters are copied,
// protecting against buffer overflow if the size of 'source' is greater than 'destination'.
