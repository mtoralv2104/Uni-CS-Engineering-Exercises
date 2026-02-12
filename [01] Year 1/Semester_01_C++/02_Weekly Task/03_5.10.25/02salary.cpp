// 02.salary.cpp
// Marcos Torres 1.10.25

#include <iostream>
using namespace std;

const float tax = 25.0;
const float HOURLY_PAY = 60.0;

int main ()
{
    double hours , days , total , net ;
    cout << " Enter the number of worked hours : ";
    cin >> hours ;
    cout << " Enter the number of worked days : ";
    cin >> days ;
    total = (hours * days * HOURLY_PAY);
    net = total - tax;
    cout << "The gross amount to be paid is: ";
    cout << total << endl ;
    cout << "The net amount to be paid is: ";
    cout << net << endl ;

return 0;
}