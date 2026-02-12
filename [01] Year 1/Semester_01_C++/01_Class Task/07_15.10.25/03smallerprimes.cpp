// 03smallerprimes.cpp
// Marcos Torres 15.10.25
#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

main()
{

int N;
    cout << "Enter your integer: ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    cout << "\nPrinting smaller primes than " << N << endl;

    int currentNumber = 2; 

    while (currentNumber < N) {
        if (isPrime(currentNumber)) {
            cout << currentNumber << " "; 
        }
        currentNumber++;
    }




return 0;
}
