#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<int,N> TVec;

int main()
{
    bool circularlyEq(TVec a, TVec b);
    cout << circularlyEq((TVec){{1,2,3,4,5}},(TVec){{5,1,2,3,4}}) << endl; // true
    cout << circularlyEq((TVec){{1,2,3,4,5}},(TVec){{1,2,3,5,4}}) << endl; // false
return 0;
}

bool circularlyEq(TVec a, TVec b)
{
    if(a.size()!=b.size())
    {
        return false;
    }

for (int i = 0; i < a.size(); i++)
    {
        bool match = true;

        for (int x = 0; x < a.size(); x++)
        {
            if (a[(i + x) % a.size()] != b[x])
            {
                match = false;
                break;
            }
        }

        if(match)
        {
            return true;
        }
    }
    return false;
    
}
