// palindrome.cpp
// Marcos Torres 27.10.25
#include <iostream>
using namespace std;

int digit(int n, int p) {
    for (int i = 0; i < p; i++) {
        n /= 10; 
    }
return n % 10; 
}

int lenght(int n) 
{
    int digits;
    for (digits=0; n!=0; digits++ )
    {
        n=n/10;
    }
return digits;  
}

int reverse_digit(int n, int p, int digits)
{
    for(int i = 0; i < (digits-p); i++ )
    {
        n/=10;
    }
return n%10;
}


bool palindromic(int n)
{
    bool sol=true;

    for (int pos=0; pos < (lenght(n)); pos++)
    {
        if (digit(n,pos)!=reverse_digit(n,pos,(lenght(n))))
        {
            sol = false;
            break;
        }

    }
return sol;
}

main()
{
    cout << "Enter number: ";
    int n;
    cin >> n;
    cout << palindromic(n);

return 0;
}