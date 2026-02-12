// 4.gcd_trace.cpp
// Marcos Torres 03-11-25

#include <iostream>
#include <cmath>

using namespace std;

int gcd(int valA, int valB)
{
    cout << "Call gcd(" << valA << ", " << valB << ")" << endl;
    
    if (valB == 0)
    {
        return valA;
    }
    return gcd(valB, valA % valB);
}

int main()
{
    int num1, num2;
    
    num1 = 21;
    num2 = 28;
    cout << "GCD(" << num1 << ", " << num2 << ") = " << gcd(num1, num2) << endl << endl;

    num1 = 124;
    num2 = 348;
    cout << "GCD(" << num1 << ", " << num2 << ") = " << gcd(num1, num2) << endl << endl;

    num1 = 482;
    num2 = 288;
    cout << "GCD(" << num1 << ", " << num2 << ") = " << gcd(num1, num2) << endl;

    return 0;
}