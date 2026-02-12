#include <iostream>
#include <array>
#define INT_MAX __INT_MAX__
#define INT_MIN (-INT_MAX - 1)


using namespace std;

const int N = 5;
typedef array<int,N> TVec;

int main()
{
    int sum2Biggest(TVec);
    cout << sum2Biggest((TVec){{1,2,3,4,5}}) << endl; // 9
    cout << sum2Biggest((TVec){{1,5,3,4,5}}) << endl; // 10
return 0;
}

int sum2Biggest(TVec a)
{
    int sum = 0;
    int max,posmax;

    for(int x=0; x<2;x++)
    {
        
        for(int i=0; i<a.size();i++)
        {
            if( i==0)
            {
                max=a[i];
                posmax=i;
            }
            else if(a[i]>max)
            {
                max=a[i];
                posmax=i;
            }
        }
        sum+=max;
        a[posmax]=INT_MIN;
    }
    return sum;
}