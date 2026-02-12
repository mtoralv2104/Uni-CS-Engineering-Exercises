// 09chinese.cpp
// Marcos Torres 05.10.2025
#include <iostream>
#include <string>
using namespace std;

int main() {
    int year;
    string zodiacSigns[] = {"Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig"};

    cout << "Enter your birth year: ";
    cin >> year;

    int baseYear = 2008;
    int index = (year - baseYear) % 12;

    if (index < 0)
    {
        index = index + 12;
    }
    cout << "Your Chinese zodiac sign is: " << zodiacSigns[index] << endl;

    return 0;
}
