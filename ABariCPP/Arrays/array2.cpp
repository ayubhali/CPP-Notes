#include <iostream>
using namespace std;

int main()
{
    float A[5] = {2.5,4.2,6,8,10};

    for (auto x:A) {  //for each iterating through elements 
        cout << x << endl;
    }
    return 0;
}