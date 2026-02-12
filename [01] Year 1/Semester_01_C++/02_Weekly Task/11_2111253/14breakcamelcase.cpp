// 14breakcamelcase.cpp
// Marcos Torres 18-11-25

#include <iostream>
#include <string>
using namespace std;



int main()
{
    string breakCamelCase(string s);
    cout << breakCamelCase("camelCasing") << endl; // camel_casing
    cout << breakCamelCase("__A__aA_A_") << endl; // ___a__a_a__a_cout << breakCamelCase("camelC") << endl; // camel_c
    cout << breakCamelCase("camElC") << endl; // cam_el_c
    cout << breakCamelCase("APPLE") << endl; // _a_p_p_l_e
    return 0;
}

string breakCamelCase(string s)
{
    string newstr;

    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            newstr += '_';
            newstr += char(s[i] + 32); // convert to lowercase ASCII
        }
        else
        {
            newstr += s[i];
        }
    }

    return newstr;
}

bool isupper(char a)
{
    return (a >= 'A' and a <= 'Z');
}