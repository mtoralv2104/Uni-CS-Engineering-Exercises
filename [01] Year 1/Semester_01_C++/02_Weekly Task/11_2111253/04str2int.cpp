// 04str2int.cpp
// Marcos Torres 18-11-25

#include <iostream>
#include <string>
using namespace std;

int str2int(string s);

int main()
{
    cout << str2int("1234") << endl;
    cout << str2int("9663") << endl;
    return 0;
}


int str2int(string s)
{
    int num=0;
    for ( int i = 0 ; i < s.size(); i++)
    {
        
        num = 10 * num + s[i]-'0';
    }
return num;
}