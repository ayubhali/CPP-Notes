#include <iostream>
using namespace std;

enum day {mon, tue, wed, thu, fri, sat, sun}; // all these are set of constants 
enum dept {cs,it,ece,mech};

int main()
{
    day d;
    
    d = tue;
    dept dep = cs;

    cout << d << endl;
    cout << dep << endl;

    return 0;
}