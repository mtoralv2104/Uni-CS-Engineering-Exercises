// 05basechange.cpp
// Marcos Torres 18-11-25

#include <iostream>
#include <string>
using namespace std;

int str2int(string s, int base=10);
string tolower(string s);

int main()
{
    cout << str2int("121231") << endl; 
    cout << str2int("1111", 2) << endl;
    cout << str2int("77", 8) << endl; 
    cout << str2int("A", 16) << endl; 
    cout << str2int("FFFF", 16) << endl; 

    return 0;
}


int str2int(string s, int base)
{
    int num=0;
    for (int i = 0; i < s.size(); i++)
    {
        int digit = 0;
        char c = s[i];

        if (c >= '0' and c <= '9')
        {
            digit = c - '0';
        }
        else if (c >= 'A' and c <= 'Z')
        {
            digit = c - 'A' + 10;
        }
        else if (c >= 'a' and c <= 'z')
        {
            digit = c - 'a' + 10;
        }
        num = num * base + digit;
        
    }
return num;
}
