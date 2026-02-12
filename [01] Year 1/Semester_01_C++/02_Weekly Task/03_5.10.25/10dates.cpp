// 10dates.cpp
// Marcos Torres 1.10.25

#include <iostream>
using namespace std;

int main() {
    int year, month, day;

    cout << "Enter 'year month day': ";
    cin >> year >> month >> day;


    cout << year << " " << month << " " << day << " = ";

    if (month == 1)
        cout << year << "-January-" << day << endl;
    else if (month == 2)
        cout << year << "-February-" << day << endl;
    else if (month == 3)
        cout << year << "-March-" << day << endl;
    else if (month == 4)
        cout << year << "-April-" << day << endl;
    else if (month == 5)
        cout << year << "-May-" << day << endl;
    else if (month == 6)
        cout << year << "-June-" << day << endl;
    else if (month == 7)
        cout << year << "-July-" << day << endl;
    else if (month == 8)
        cout << year << "-August-" << day << endl;
    else if (month == 9)
        cout << year << "-September-" << day << endl;
    else if (month == 10)
        cout << year << "-October-" << day << endl;
    else if (month == 11)
        cout << year << "-November-" << day << endl;
    else if (month == 12)
        cout << year << "-December-" << day << endl;
    else
        cout << "error" << endl;

    return 0;
}

