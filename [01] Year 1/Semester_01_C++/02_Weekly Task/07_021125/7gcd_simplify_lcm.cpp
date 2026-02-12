// 7.gcd_simplify_lcm.cpp
// Marcos Torres 03-11-25

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int gcd(int valA, int valB)
{
    valA = abs(valA);
    valB = abs(valB);

    while (valB != 0)
    {
        int temp = valB;
        valB = valA % valB;
        valA = temp;
    }
    return valA;
}

void simplify(int num, int den, int& simplifiedNum, int& simplifiedDen)
{
    if (den == 0)
    {
        simplifiedNum = num;
        simplifiedDen = 0;
        return;
    }
    if (num == 0)
    {
        simplifiedNum = 0;
        simplifiedDen = 1;
        return;
    }

    int commonDivisor = gcd(num, den);
    
    simplifiedNum = num / commonDivisor;
    simplifiedDen = den / commonDivisor;
}

void testIt(int a, int b)
{
    int newNum, newDen;
    simplify(a, b, newNum, newDen);
    cout << a << "/" << b << ": " << newNum << "/" << newDen << endl;
}

int main()
{
    testIt(12, 18);
    testIt(54, 24);
    testIt(12, 30);
    testIt(1260, 600);
    return 0;
}