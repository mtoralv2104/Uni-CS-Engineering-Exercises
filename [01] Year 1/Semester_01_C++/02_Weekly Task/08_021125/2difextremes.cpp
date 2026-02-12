// 2.difextremes.cpp
// Marcos Torres 03-11-25

#include <iostream>

using namespace std;

int main()
{
    int inputNumber;
    int maximumValue;
    int minimumValue;
    bool firstNumber = true;

    while (cin >> inputNumber && inputNumber != 0)
    {
        if (firstNumber)
        {
            maximumValue = inputNumber;
            minimumValue = inputNumber;
            firstNumber = false;
        }
        else
        {
            if (inputNumber > maximumValue)
            {
                maximumValue = inputNumber;
            }
            if (inputNumber < minimumValue)
            {
                minimumValue = inputNumber;
            }
        }
    }

    if (!firstNumber)
    {
        cout << maximumValue - minimumValue << endl;
    }

    return 0;
}