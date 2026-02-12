// 05base10.cpp
// Marcos Torres 15.10.25
#include <iostream>
using namespace std;

main()
{
    int n, i;
    cout << "Enter the number you want to know its number of digits: ";
    cin >> n;

    for (i = 1; n%10!=n ;i++)
        {
            n = n/10;
        }

    cout << i;

    return 0;
}
