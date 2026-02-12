// 01find.cpp
// Marcos Torres 18-11-25

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int find(string s, string pat);

    string str = "computerscience";
    string pat = "science";

    cout << find(str,pat);


return 0;
}


int find(string s, string pat)
{
    int position;
    int j = 0;

    for ( int i = 0; i< int(s.size()) ; i++)
    { 
        if (s[i]==pat[j])
        {
            j++;

            if (j==pat.size())
            {
                position = i - pat.size()+1;
                return position;
            }
        }
        else
        {
            i = i - j; 
            j = 0;
        }
    }
    return -1;
}
