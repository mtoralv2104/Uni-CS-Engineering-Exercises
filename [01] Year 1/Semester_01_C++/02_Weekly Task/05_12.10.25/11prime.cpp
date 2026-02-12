// 11prime.cpp
// Marcos Torres 07.10.25
#include <iostream>
using namespace std;

#include <iostream>

int main() {
    int n;
    bool isPrime = true;
    
    cout << "Enter a natural number to check if it is prime: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
       
        for (int i = 2; i < n; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break; 
            }
        }
    }


    cout << "\n--- Result ---" << endl;
    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}