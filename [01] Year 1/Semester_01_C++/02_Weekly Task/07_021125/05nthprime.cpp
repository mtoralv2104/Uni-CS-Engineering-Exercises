// 5.nth_prime.cpp
// Marcos Torres 03-11-25

#include <iostream>
using namespace std;

typedef long long Tlong;
bool isPrime(Tlong number)
{
    bool answer;

    if (number <= 1)
    {
        answer = false;
    }
    else if (number == 2)
    {
        answer = true;
    }
    else if (number % 2 == 0)
    {
        answer = false;
    }
    else
    {
        Tlong divisor = 3;
        while (divisor * divisor <= number && number % divisor != 0)
        {
            divisor += 2;
        }
        answer = divisor * divisor > number;
    }
    return answer;
}

unsigned long long nPrime(int position)
{
    if (position <= 0) return 0;

    int primeCount = 0;
    unsigned long long currentNumber = 1;

    while (primeCount < position)
    {
        currentNumber++;
        if (isPrime(currentNumber))
        {
            primeCount++;
        }
    }
    return currentNumber;
}

int main()
{
    for (int i = 1; i < 100; i += 10)
        cout << i << ": " << nPrime(i) << endl;
        
    return 0;
}