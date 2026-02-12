// 8.lcmBruteForce.cpp
// Marcos Torres 03-11-25

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int lcmBruteForce(int valA, int valB)
{
    if (valA == 0 || valB == 0) return 0;
    
    valA = abs(valA);
    valB = abs(valB);

    int greater = max(valA, valB);
    int multiple = greater;

    while (true)
    {
        if (multiple % valA == 0 && multiple % valB == 0)
        {
            return multiple;
        }
        multiple += greater;
    }
}

int main()
{
    cout << "LCM(8, 12) Brute Force: " << lcmBruteForce(8, 12) << endl;
    cout << "LCM(10, 5) Brute Force: " << lcmBruteForce(10, 5) << endl;
    return 0;
}