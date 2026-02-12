// 2.fibonacci.cpp
// Marcos Torres 03-11-25

#include <iostream>

using namespace std;

typedef long long unsigned TLong;

TLong fib(unsigned position)
{
    if (position <= 1)
    {
        return position;
    }
    return fib(position - 1) + fib(position - 2);
}

int main()
{
    for (unsigned index = 0; index < 40; ++index)
        cout << fib(index) << " ";
    cout << endl;
    return 0;
}