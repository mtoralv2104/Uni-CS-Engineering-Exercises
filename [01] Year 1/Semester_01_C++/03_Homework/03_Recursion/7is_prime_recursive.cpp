// 7.is_prime_recursive.cpp
// Marcos Torres 03-11-25

#include <iostream>
#include <cmath>

using namespace std;

bool isPrimeTest(int number, int divisor)
{
    if (number <= 1) 
    {
        return false;
    }
    
    if (divisor * divisor > number)
    {
        return true;
    }
    
    if (number % divisor == 0)
    {
        return false;
    }
    
    return isPrimeTest(number, divisor + 1);
}

bool isPrime(int number)
{
    return isPrimeTest(number, 2);
}

int main()
{
    for (int index = 1; index < 1000; ++index)
    {
        if (isPrime(index))
        {
            cout << index << " ";
        }
    }
    cout << endl;
    return 0;
}