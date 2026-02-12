// 15sseries.cpp
// Marcos Torres 07.10.25
#include <iostream>
#include <cmath>  
using namespace std;

int main() {

    const int MAXPOW = 10;
    double x;
    double s = 1.0;         
    double power = 1.0;   
    double factorial = 1.0;  
    cout << "Enter a real number x to evaluate the series: ";
    cin >> x;

    for (int i = 1; i <= MAXPOW; ++i) {
        
        power *= x;    
        
        factorial *= i; 
        
        s += (power / factorial);
    }

    cout << "\n--- Result ---" << endl;
    cout << fixed << 8;
    cout << "The calculated value of s is: " << s << endl;

    cout << "For comparison, the value of e^x is: " << exp(x) << endl;

    return 0;
}