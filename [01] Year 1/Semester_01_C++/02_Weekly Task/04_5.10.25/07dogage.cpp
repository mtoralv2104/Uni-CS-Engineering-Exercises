// 07dogage.cpp
// Marcos Torres 05.10.2025
#include <iostream>
using namespace std;

int main() {
    double Years, dogYears;

    cout << "Enter the dog's age in human years: ";
    cin >> Years;

    if (Years < 0) {
        cout << "Age cannot be negative!" << endl;
        return 1;
    }

    if (Years <= 2)
        dogYears = Years * 10.5;
    else
        dogYears = 2 * 10.5 + (Years - 2) * 4;

    cout << "The dog's age in dog years is: " << dogYears << endl;

    return 0;
}
