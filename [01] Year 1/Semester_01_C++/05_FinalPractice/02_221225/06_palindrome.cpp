#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool palindrome(string s);  
    cout<<palindrome("hola")<<endl;
    cout<<palindrome("alola")<< endl;
    cout<<palindrome("ahha")<<endl;


return 0;
}

bool palindrome(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[s.size()-i-1])
        {
            return false;
        }
    }
    return true;
}