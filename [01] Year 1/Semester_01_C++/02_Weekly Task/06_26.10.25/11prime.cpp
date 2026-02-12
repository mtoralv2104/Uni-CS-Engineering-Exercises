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

int main() {
    int n;
    
    cout << "Enter a number to check if it's prime: ";
    cin >> n;
    
    if (isprime(n)) {
        cout << n << " is prime." << endl;
    } else {
        cout << n << " is not prime." << endl;
    }
    
    return 0;
}