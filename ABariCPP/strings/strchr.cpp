#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "Programming"; // Initialize s1 with "Programming"

    // Use strchr to find the first occurrence of 'p' in s1
    // strchr returns a pointer to the first occurrence of 'p' in s1, or NULL if not found
    if (strchr(s1, 'p') != nullptr) {
        // If 'p' is found, print the substring of s1 starting from 'p'
        cout << strchr(s1, 'p') << endl;
    } else {
        // If 'p' is not found, print a message
        cout << "'p' not found in " << s1 << endl;
    }

    return 0;
}
