// 13divisor.cpp
// Marcos Torres 07.10.25
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter an integer greater than 0." << endl;
        return 0; 
    }

    cout << "The divisors of " << n << " are: ";

    for (int i = 1; i < n; ++i) {

        if (n % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}