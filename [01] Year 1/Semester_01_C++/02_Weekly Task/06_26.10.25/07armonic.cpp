#include <iostream>
using namespace std;

double harmonic(int n) {
    double sum = 0.0;
    
    for (int i = 1; i <= n; ++i) {
        sum += (1.0 / i);
    }
    
    return sum;
}

int main() {
    int n;
    
    cout << "Enter a value for n (0 or negative to quit): ";
    while (cin >> n && n > 0) {
        
        double result = harmonic(n);

        cout << "The harmonic sum for n=" << n << " is: " << result << endl;
        
        cout << "Enter another value for n (0 or negative to quit): ";
    }

    return 0;
}