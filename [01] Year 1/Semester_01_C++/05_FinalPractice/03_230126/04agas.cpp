#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{

    int sumDigits(int n);

    cout << sumDigits(1234) << endl; // 10
    cout << sumDigits( 0) << endl; // 0
    cout << sumDigits(9005) << endl; // 14
    cout << sumDigits( 7) << endl; // 7


return 0;
}


int sumDigits(int n)
{

   
    return((n%10)+sumDigits(n/10));

}