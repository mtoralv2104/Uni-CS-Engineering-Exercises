// 13isogram.cpp
// Marcos Torres 18-11-25

#include <iostream>
#include <string>
using namespace std;

bool isIsogram(string a);
string lower(string c);
bool isupper(char a);

int main() 
{
    cout << isIsogram("Dermatoglyphics") << endl; // 1
    cout << isIsogram("aba") << endl;             // 0
    cout << isIsogram("moOse") << endl;           // 0

    return 0;
}

bool isIsogram(string a)
{
    a = lower(a);

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[j] == a[i])
                return false;
        }
    }
    return true;
}

string lower(string c)
{
    for (int i = 0; i < c.size(); i++)
    {
        if (isupper(c[i]))
            c[i] = c[i] - 32;  
    }
    return c;
}

bool isupper(char a)
{
    return (a >= 'A' and a <= 'Z');
}
