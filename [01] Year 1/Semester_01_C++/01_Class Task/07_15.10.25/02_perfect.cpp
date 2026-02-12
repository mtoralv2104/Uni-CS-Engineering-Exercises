// 02_perfect.cpp
// Marcos Torres 15.10.25
#include <iostream>
using namespace std;

int main() {
    int n;
    int sumOfDivisors = 0;

    cout << "Enter a positive integer to check if it's perfect: ";
    cin >> n;

    if (n <= 1) {
        cout << "The number " << n << " is not perfect." << endl;
        return 0;
    }

    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sumOfDivisors += i;
        }
    }

    if (sumOfDivisors == n) {
        cout << "\nThe number " << n << " is perfect." << endl;
    } else {
        cout << "The number " << n << " is not perfect." << endl;
        cout << "(The sum of its proper divisors is " << sumOfDivisors << ")." << endl;
    }

    return 0;
}