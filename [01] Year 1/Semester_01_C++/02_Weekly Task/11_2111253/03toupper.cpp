// 03toupper.cpp
// Marcos Torres 18-11-25

#include <iostream>
#include <string>
using namespace std;

string toUpper(string s);

int main()
{
    cout << toUpper("engineering") << endl;
    cout << toUpper("striNG") << endl;
    return 0;
}

string toUpper(string s)
{
    string news;
    
    for (int i = 0; i < int(s.size()); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
        {
            news += s[i] - 32;
        }
        else
        {
            news += s[i];
        }
        
    }
    return news;
}