#include <iostream>
#include <string>

using namespace std;

int main()
{
    string capitalise(string s);
    cout<<capitalise("hOLa que TAL jeJEJE")<<endl;
    cout<<capitalise("TEST 01 test tEst")<< endl;
    cout<<capitalise("pruebaS 003 %")<<endl;


return 0;
}

string capitalise(string s)
{
    string result = "";
    for(int i=0; i<s.size();i++)
    {
        if(i==0)
        {
            result+=toupper(s[i]);
        }
        else if(s[i-1]==32)
        {
            result+=toupper(s[i]);
        }
        else
        {
            result+=tolower(s[i]);
        }
    }
    return result;
}