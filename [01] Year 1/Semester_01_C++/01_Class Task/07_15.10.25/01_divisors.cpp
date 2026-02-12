// 01_divisors.cpp
// Marcos Torres Alvarez 15.10.25

#include <iostream>
using namespace std;

main()
{
int n, i;
cout << "Select the integer: ";
cin >> n;
cout << "The divisors of " << n << " are: " << endl;
for (i=1; i<=n/2 ;i++)
{
    if (n % i == 0)
    {
        cout << i << ", ";
    }
    else
    {
        continue;
    }
}


return 0;
}