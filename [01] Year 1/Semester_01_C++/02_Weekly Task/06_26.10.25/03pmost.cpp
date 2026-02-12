// 03pmost.cpp
// Marcos Torres Álvarez 26.10.25

#include <iostream>
using namespace std;

int digit(int n, int p, int base) {
    for (int i = 0; i < p; i++) {
        n /= base; 
    }
    return n % base; 
}

main()
{
    cout << digit(25064, 1, 10);
    return 0;
}