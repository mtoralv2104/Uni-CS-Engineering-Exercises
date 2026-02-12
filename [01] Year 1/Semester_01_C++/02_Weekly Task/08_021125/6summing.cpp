// 6.summing.cpp
// Marcos Torres 03-11-25

#include <iostream>

using namespace std;

int main()
{
    const int MAX_SUM = 10;
    int totalSum = 0;
    int inputNumber;

    while (cin >> inputNumber)
    {
        if (totalSum + inputNumber > MAX_SUM)
        {
            break;
        }
        totalSum += inputNumber;
    }

    cout << totalSum << endl;
    return 0;
}