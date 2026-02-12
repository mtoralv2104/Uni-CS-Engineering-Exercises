// 02numbere.cpp
// Marcos Torres 23-10-25
#include <iostream>
using namespace std;

double exp(float x, double precision = 0.01) 
{
    double term = 1.0;
    double sum = term;
    int i = 1;

    while (term > precision) {
        term *= x / i;  
        sum += term;
        i++;
    }

    cout << sum;
}

main()
{
    double sum;
    exp(0);
    return 0;
}
