// 06leapyear.cpp
// Marcos Torres 26.10.25
#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year)) {
        cout << year << " IS leap." << endl;
    } else {
        cout << year << " IS NOT leap." << ' ' << endl;
    }

    return 0;
}