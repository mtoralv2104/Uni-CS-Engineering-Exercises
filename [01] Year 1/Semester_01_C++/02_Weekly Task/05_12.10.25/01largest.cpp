// 01largest.cpp
// Marcos Torres 07.10.25
#include <iostream>
#include <cstdlib>
using namespace std;

main()
{
    int int_NumNumbers, int_smallest, int_largest, int_number, int_sum=0;
    float float_av;
    cout << "Enter the quantity of numbers you wish to sort: ";
    cin >> int_NumNumbers;
    cout << endl;
    
    if (int_NumNumbers <= 1)
    {
        cout << "The quantity must be above 1" << endl << endl;
        system("pause");
        cout << "Exiting...";
        return 1;
    }

    int i;
    for( i=0 ; i<int_NumNumbers; i++)
    {
        cout << "Enter number " << i+1 << ": ";
        cin >> int_number;
        if (i==0)
        {
            int_smallest= int_number;
            int_largest = int_number;
        }
        if (int_smallest > int_number)
        {
            int_smallest = int_number;
        }
         if (int_largest < int_number)
        {
            int_largest = int_number;
        }
            int_sum = int_sum + int_number;
    }

    cout << endl << "The largest number is: " << int_largest << endl;
    cout << "The smallest number is: " << int_smallest << endl;
    cout << "The mean is: " << int (int_sum/int_NumNumbers + 0.5) << endl;

    system("pause");
return 0;
}

