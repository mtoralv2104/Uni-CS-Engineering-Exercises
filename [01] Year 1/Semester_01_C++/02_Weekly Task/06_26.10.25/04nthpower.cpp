// 04nthpower.cpp
// Marcos Torres 26.10.25
#include <iostream>
using namespace std;

float powx(float x, int n) {
    
    if (n == 0) {
        return 1;
    }

    float result = 1;
    int loop_count = n;

    if (n < 0) {
        loop_count = -n;
    }

    for (int i = 0; i < loop_count; ++i) {
        result *= x;
    }

    if (n < 0) {
        return 1/ result;
    } else {
        return result;
    }
}

int main() {
    float x;
    int n;

    cout << "Enter the base number (x): ";
    cin >> x;

    cout << "Enter the integer exponent (n): ";
    cin >> n;

    float result = powx(x, n);

    cout << x << " to the power of " << n << " is: " << result << endl;

    return 0;
}