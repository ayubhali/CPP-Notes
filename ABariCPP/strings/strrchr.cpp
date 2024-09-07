#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "Programming"; // Initialize s1 with "Programming"

    // Use strrchr to find the last occurrence of 'g' in s1
    // strrchr returns a pointer to the last occurrence of 'g', or NULL if not found
    if (strrchr(s1, 'g') != nullptr) {
        // If 'g' is found, print the substring of s1 starting from the last 'g'
        cout << strrchr(s1, 'g') << endl;
    } else {
        // If 'g' is not found, print a message
        cout << "'g' not found in " << s1 << endl;
    }

    return 0;
}
