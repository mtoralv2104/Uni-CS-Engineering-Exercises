// 01position.cpp
// Marcos Torres 22-10-25
#include <iostream>
using namespace std;

int position(int n, int p)
{
    if (p!=0)
    {
    while (p>1)
    {
        n=n/10;
        p--;
    }
    n = n%10;
    return n;
    }
    else{
        cout << "Error, position must be greater than 0";
    }

}



main()
{

   cout << position(2025,4);

    return 0;
}