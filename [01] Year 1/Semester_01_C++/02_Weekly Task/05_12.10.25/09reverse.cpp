// 09reverse.cpp
// Marcos Torres 07.10.25
#include <iostream>
using namespace std;


int main() {
    int number;

    cout << "Enter an integer number: ";
    cin >> number;

    cout << "The number backwards is: ";


    do {
        int lastDigit = number % 10;

        cout << lastDigit;

        number /= 10; 

    } while (number > 0);

    cout << endl; 

    return 0;
}