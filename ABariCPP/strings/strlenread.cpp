#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    char *s = (char*) malloc(100 * sizeof(char));

    if (s == nullptr) {
        cerr << "Memory allocation failed." << endl;
        return 1;
    }

    cout << "Enter a string: ";
    cin.getline(s, 100);

    cout << "Length: " << strlen(s) << endl;

    free(s);
    return 0;
}
