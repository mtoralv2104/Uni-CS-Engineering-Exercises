#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isLegalDate(int year, int month, int day) {
    
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return false;
    }

    int maxDays;

    if (month == 2) {
        if (isLeapYear(year)) {
            maxDays = 29;
        } else {
            maxDays = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDays = 30;
    } else {
        maxDays = 31;
    }

    return day <= maxDays;
}

int main() {
    int year, month, day;

    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter day: ";
    cin >> day;

    if (isLegalDate(year, month, day)) {
        cout << "legal date" << endl;
    } else {
        cout << "not legal date" << endl;
    }

    return 0;
}