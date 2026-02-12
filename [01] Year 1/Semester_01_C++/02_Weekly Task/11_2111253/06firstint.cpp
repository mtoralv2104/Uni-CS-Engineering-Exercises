// 06firstint.cpp
// Marcos Torres 18-11-25

#include <iostream>
#include <string>
using namespace std;


int main()
{

    int firstint(string s);
    cout << firstint("8") <<endl;
    cout << firstint("You owe me 10, doesn't you?5+92559292859") <<endl;
    cout << firstint("No ten, but -12") << endl;


return 0;
}

int firstint(string s)
{
    int num=0;
    bool found = false;
    for (int i=0; i<=s.size();i++)
    {
        if (s[i]>='0' and s[i]<='9')
        {
            found = true;
            num = 10 * num + int(s[i]-'0');
        }
        else if (found and not(s[i]>='0' and s[i]<='9') )
        {
            return num;
        }
    }
    return num;
}