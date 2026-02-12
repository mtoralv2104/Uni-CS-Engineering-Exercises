#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool validBraces(string s);
    bool isclosed (string s, int pos);
    cout<<validBraces( "(){}[]" ) <<endl; // returns true
    cout<<validBraces( "(}" ) <<endl; // returns false
    cout<<validBraces( "[(])" ) <<endl; // returns false
    cout<<validBraces( "([{}])" )<< endl; // returns true



return 0;
}

bool validBraces(string s)
{
    int bracket=0;
    int parenthesis=0;
    int curly=0;
    for(int i=0;i<s.size();i++)
    {
       switch (s[i])
       {
        case '[':
            bracket++;
            break;
        case '{':
            curly++;
            break;
        case '(': 
            parenthesis++;
            break;  
       case ']':
            bracket--;
            break;
        case '}':
            curly--;
            break;
        case ')': 
            parenthesis--;
            break;
        default:
            break;  
       }
    if(bracket<0 or parenthesis<0 or curly<0)
    {
        return false;
    }
    }
    if(bracket!=0 or parenthesis!=0 or curly!=0)
    {
        return false;
    }
    return true;
}

