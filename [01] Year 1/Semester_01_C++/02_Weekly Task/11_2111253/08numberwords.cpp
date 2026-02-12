// 08numberwords.cpp
// Marcos Torres 18-11-25

#include <iostream>
#include <string>
using namespace std;


int main()
{
    void with(string s);
    with(" I Love Programming"); // 3
    with(" some; (like) a2b"); // 4
    with(" live on time, - emit no evil "); // 6
    
return 0;
}

void with(string s)
{
    bool isletter(char a);
    int counter = 0;
    for( int i= 0; i<=s.size();i++)
    {
        if (not isletter(s[i-1])and isletter(s[i]))
        {
            counter++;
        }
    }
    cout << counter << endl;
}

bool isletter(char a)
{
    bool isletter;
    if (a <= 'z' and a >= 'a' )
    {
        isletter=true;
    }
    else if  (a <= 'Z' and a >= 'A' )
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