// 06position.cpp
// Marcos Torres 15.10.25
#include <iostream>
using namespace std;

main()
{
    int n, p;
    cout << "Enter the number: ";
    cin >> n; 
    cout << "\nEnter the position: ";   
    cin>> p;
    
    if (p!=0)
    {
    while (p>1)
    {
        n=n/10;
        p--;
    }
    n = n%10;
    cout << n;
    }
    else{
        cout << "Error, position must be greater than 0";
    }

    return 0;
}