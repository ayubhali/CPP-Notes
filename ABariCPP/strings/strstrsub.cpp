#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "Programming"; // Initialize s1 with "Programming"
    char s2[20] = "k";           // Initialize s2 with "k"

    // Use strstr to check if s2 is a substring of s1
    // strstr returns a pointer to the first occurrence of s2 in s1, or NULL if not found
    if (strstr(s1, s2) != NULL) {
        // If found, print the substring of s1 starting from where s2 is found
        cout << strstr(s1, s2) << endl; 
    }
    else {
        // If s2 is not found in s1, print "Not found"
        cout << "Not found" << endl;
    }

    return 0;
}
