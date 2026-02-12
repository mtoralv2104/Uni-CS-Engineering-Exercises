// 06seconds.cpp
// Marcos Torres 05.10.2025
#include <iostream>
using namespace std;

int main() {
    int int_totalSeconds;
    cout << "Enter total number of seconds: ";
    cin >> int_totalSeconds;

    if (int_totalSeconds < 0) {
        cout << "Entered number can't be negative." << endl;
        return 1;
    }

    int days = int_totalSeconds / 86400;           
    int remaining = int_totalSeconds % 86400;

    int hours = remaining / 3600;              
    remaining %= 3600;

    int minutes = remaining / 60;              
    int seconds = remaining % 60;

    cout << int_totalSeconds << " seconds are:\n";
    cout << days << " day(s), "
         << hours << " hour(s), "
         << minutes << " minute(s), "
         << seconds << " second(s)." << endl;

    return 0;
}
