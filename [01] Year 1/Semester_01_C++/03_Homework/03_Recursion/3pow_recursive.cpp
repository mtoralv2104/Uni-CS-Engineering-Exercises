// 3.pow_recursive.cpp
// Marcos Torres 03-11-25

#include <iostream>

using namespace std;

float powerFunc(float base, int exponent)
{
    if (exponent == 0)
    {
        return 1.0f;
    }
    else if (exponent > 0)
    {
        return base * powerFunc(base, exponent - 1);
    }
    else
    {
        return powerFunc(base, exponent + 1) / base;
    }
}

int main()
{
    cout << "2^3: " << powerFunc(2.0f, 3) << endl;
    cout << "2^0: " << powerFunc(2.0f, 0) << endl;
    cout << "2^-2: " << powerFunc(2.0f, -2) << endl;
    cout << "3.5^2: " << powerFunc(3.5f, 2) << endl;
    return 0;
}