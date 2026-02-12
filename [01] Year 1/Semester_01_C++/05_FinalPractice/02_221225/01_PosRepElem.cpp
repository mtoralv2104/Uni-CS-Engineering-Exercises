#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<int,N> TVec;

int main()
{
    int firstRep(TVec a);
    cout << firstRep((TVec){{1, 2, 3, 2}}) << endl; // 9
    cout << firstRep((TVec){{1, 2, 1, 2}}) << endl; // 10
return 0;
}

int firstRep(TVec a)
{
    for(int i=0; i<a.size();i++)
    {
        for(int x=i+1; x<a.size();x++)
        {
            if(a[i]==a[x])
            {
                return i;
            }
        }
    }
    return -1;
}