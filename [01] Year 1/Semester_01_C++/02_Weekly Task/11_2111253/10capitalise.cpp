// 10capitalise.cpp
// Marcos Torres 18-11-25

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string capitalise(string s);
    cout << capitalise(" i Love programming")<< endl; 
    cout << capitalise(" some; (like) a2b")<< endl; 
    cout << capitalise(" live on time, - emit no evil ")<<endl; 
    
return 0;
}

string capitalise(string s)
{
    bool isunder(char a);
    bool isletter(char a);
    for( int i= 0; i<=s.size();i++)
    {
        if (not isletter(s[i-1])and isunder(s[i]))
        {
            s[i]=s[i]-32;
        }
    }
    return s;
}

bool isunder(char a)
{
    bool isletter;
    if (a <= 'z' and a >= 'a' )
    {
        isletter=true;
    }
    else{
        isletter=false;
    }
    if (isletter==true)
    {
        return true;
    }
    else{
        return false;
    }
}

bool isletter(char a)
{
    bool isletter;
    if (a <= 'z' and a >= 'a' )
    {
        isletter=true;
    }
    else if (a <= 'Z' and a >= 'A' )
    {
        isletter=true;
    }
    else{
        isletter=false;
    }
    if (isletter==true)
    {
        return true;
    }
    else{
        return false;
    }
}