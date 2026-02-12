// 10square.cpp
// Marcos Torres 07.10.25
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a natural number (n >= 0) to check: ";
    cin >> n;

    if (n < 0) {
        cout << n << " is not a natural number." << endl;
        return 0; 
    }

    if (n == 0) {
        cout << "0 is a perfect square (0 * 0 = 0)." << endl;
        return 0;
    }

    long long i = 1;
    bool found = false;

    while (i * i <= n) {
        if (i * i == n) {
            found = true; 
            break;        
        }
        i++;
    }

    cout << "\n--- Result ---" << endl;
    if (found) {
        cout << "YES, " << n << " is a perfect square." << endl;
        cout << "Proof: " << i << " * " << i << " = " << n << endl;
    } else {
        cout << "NO, " << n << " is not a perfect square." << endl;
    }

    return 0;
}