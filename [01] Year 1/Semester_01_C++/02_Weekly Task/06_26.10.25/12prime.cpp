#include <iostream>
#include <cmath>

using namespace std;

bool isprime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    
    int limit = sqrt(n);
    
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int nprime(int n) {
    if (n <= 0) {
        return -1; 
    }

    int count = 0;
    int num = 2;

    while (true) {
        if (isprime(num)) {
            count++;
            if (count == n) {
                return num;
            }
        }
        num++;
    }
}

int main() {
    int n;
    
    cout << "Enter which prime number you want (n): ";
    cin >> n;
    
    int result = nprime(n);
    
    if (result != -1) {
        cout << "The " << n << "-th prime number is: " << result << endl;
    } else {
        cout << "Invalid input. Please enter a positive number." << endl;
    }
    
    return 0;
}