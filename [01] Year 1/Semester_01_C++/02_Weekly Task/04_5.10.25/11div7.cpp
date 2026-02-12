// 11div7.cpp
// Marcos Torres 05.10.2025
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int lastDigit = (n % 10);
    int remaining = (n / 10);
    int result = remaining - 2 * lastDigit;

    if (result % 7 == 0) {
        cout << "The number is divisible by 7" << endl;
    } else {
        cout << "The number is not divisible by 7" << endl;
    }

    
    return 0;
}
