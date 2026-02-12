// 04table.cpp
// Marcos Torres 15.10.25
#include <iostream>
#include <iomanip>
using namespace std;

main()
{
    int first=1, second=1, product;
    while (second <= 10)
    {
    while (first <= 10)
    {
        product = first * second;
        cout << setw(4) << product ;
        first ++;
    }
    cout << endl;
    second ++;
    first = 1;
    }

    return 0;
}