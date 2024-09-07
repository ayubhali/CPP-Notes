#include <iostream>

int add(int a, int b) {
    int c;
    c = a + b;
    return c;
}

int main() {
    int x, y, z;
    x = 10;
    y = 15;  
    z = add(x, y);
    std::cout << z << std::endl;  
}