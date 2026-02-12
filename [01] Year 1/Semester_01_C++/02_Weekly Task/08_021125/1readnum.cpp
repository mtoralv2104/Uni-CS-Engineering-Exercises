// 1.readnum.cpp
// Marcos Torres 03-11-25

#include <iostream>

using namespace std;

int readNum(int fromLimit, int toLimit)
{
    int inputNumber;
    
    while (true)
    {
        cout << "Enter a number between " << fromLimit << " and " << toLimit << ": ";
        if (cin >> inputNumber)
        {
            if (inputNumber >= fromLimit && inputNumber <= toLimit)
            {
                return inputNumber;
            }
            else
            {
                cout << "Error: The number must be between " << fromLimit << " and " << toLimit << "." << endl;
            }
        }
        else
        {
            cout << "Error: Invalid input. Please enter an integer." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
}

int main()
{
    int result = readNum(10, 50);
    cout << "The entered number is: " << result << endl;
    return 0;
}