#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<int,N> TVec;

int main()
{
    int firstpeak(TVec a);
    cout << firstpeak((TVec){{13,2,9,7}}) << endl; // 0
    cout << firstpeak((TVec){{3,3,3,3}}) << endl; // -1
    cout << firstpeak((TVec){{3,3,3,4}}) << endl; // 3
return 0;
}

int firstpeak(TVec a)
{
    if(a[0]>a[1])
    {
        return 0;
    }

    for(int i=0; i<a.size();i++)
    {
        if((a[i-1]<a[i]) and (a[i+1]<a[i]))
        {
            return i;
        }
    }
    return -1;
}