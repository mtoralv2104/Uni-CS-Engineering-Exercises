// 1.chars_recursive.cpp
// Marcos Torres 03-11-25

#include <iostream>

using namespace std;

void readAndPrintReverse()
{
    char inputCharacter;
    cin.get(inputCharacter);

    if (inputCharacter != '\n')
    {
        readAndPrintReverse();
        cout << inputCharacter;
    }
}

void readAndPrintDirect()
{
    char inputCharacter;
    cin.get(inputCharacter);

    if (inputCharacter != '\n')
    {
        cout << inputCharacter;
        readAndPrintDirect();
    }
}

int main()
{
    cout << "Enter characters (end with Enter for reverse):" << endl;
    readAndPrintReverse();
    cout << endl;

    cout << "Enter characters (end with Enter for direct):" << endl;
    readAndPrintDirect();
    cout << endl;

    return 0;
}