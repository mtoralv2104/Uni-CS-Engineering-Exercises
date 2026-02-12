// 12prime2.cpp
// Marcos Torres 07.10.25
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


int main() {
    int N;
    cout << "How many of the first prime numbers do you want to see? ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    cout << "\nPrinting the first " << N << " prime numbers..." << endl;

    int primesFound = 0; 
    int currentNumber = 2; 

    while (primesFound < N) {
        if (isPrime(currentNumber)) {
            cout << currentNumber << " "; 
            primesFound++;
        }
        currentNumber++;
    }

    return 0;
}