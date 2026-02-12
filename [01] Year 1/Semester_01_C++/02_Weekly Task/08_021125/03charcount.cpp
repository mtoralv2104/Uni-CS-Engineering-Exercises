// 3.char_count.cpp
// Marcos Torres 03-11-25

#include <iostream>

using namespace std;

int main()
{
    char inputCharacter;
    int uppercaseCount = 0;
    int lowercaseCount = 0;

    while (cin >> inputCharacter && inputCharacter != '.')
    {
        // Manual check for uppercase letters (A-Z)
        if (inputCharacter >= 'A' && inputCharacter <= 'Z')
        {
            uppercaseCount++;
        }
        // Manual check for lowercase letters (a-z)
        else if (inputCharacter >= 'a' && inputCharacter <= 'z')
        {
            lowercaseCount++;
        }
    }

    if (uppercaseCount == lowercaseCount)
    {
        cout << "The number of uppercase letters is equal to the number of lowercase letters." << endl;
    }
    else
    {
        cout << "The number of uppercase letters is NOT equal to the number of lowercase letters." << endl;
    }

    return 0;
}