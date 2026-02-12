// 9.lcm.cpp
// Marcos Torres 03-11-25

#include <iostream>
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

int lcm(int valA, int valB)
{
    if (valA == 0 || valB == 0) return 0;
    
    long long numA = abs(valA);
    long long numB = abs(valB);

    int commonDivisor = gcd(numA, numB);
    
    return (numA / commonDivisor) * numB; 
}

int main()
{
    cout << "LCM(8, 12): " << lcm(8, 12) << endl;
    cout << "LCM(10, 5): " << lcm(10, 5) << endl;
    cout << "LCM(1260, 600): " << lcm(1260, 600) << endl;
    return 0;
}