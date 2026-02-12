// 10.prevSq.cpp
// Marcos Torres 03-11-25

#include <iostream>
#include <cmath>

using namespace std;

int prevSq(int number)
{
    if (number < 0) return 0;
    
    return static_cast<int>(sqrt(number));
}

int main()
{
    cout << "prevSq(968) returns: " << prevSq(968) << endl;
    cout << "prevSq(99) returns: " << prevSq(99) << endl;
    cout << "prevSq(100) returns: " << prevSq(100) << endl;
    return 0;
}