// 02numdigits.cpp
// Marcos Torres 26.10.25
#include <iostream>
using namespace std;


int numdigits (int n, int base ) 
{
    int digits;
    for (digits=0; n!=0; digits++ )
    {
        n=n/10;
    }
return digits;  
}


main()
{
    int base, n;
    cout << "Number: ";
    cin >> n;
    cout << "Base: ";
    cin >> base;

    cout << n << "(" << base << ")"<< " " << numdigits(n,base);
return 0;
}


