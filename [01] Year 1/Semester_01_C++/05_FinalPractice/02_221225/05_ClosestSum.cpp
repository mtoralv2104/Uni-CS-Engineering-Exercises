#include <iostream>
#include <array>
#define INT_MAX __INT_MAX__

using namespace std;

const int N = 6;
typedef array<int,N> TVec;

int main()
{
    int a,b;
    void closestSum(TVec ns, int goal,int& a, int& b);
    closestSum((TVec){{9,-3, -10, -4, -5,67}}, 4,a,b);// 9, -5
    closestSum((TVec){{1, -1, -2,-4,50}}, 0,a,b);// 1, -1
    closestSum((TVec){{0, 2, -10, 10, 5, 4}}, 0,a,b); // -10, 10

return 0;
}

void closestSum(TVec ns, int goal,int& a, int& b)
{
    int bestdiff=INT_MAX;
    for(int i=0;i<ns.size();i++)
    {
        for(int j=i+1;j<ns.size();j++)
        {
            int difference = abs(goal-(ns[i]+ns[j]));

            if( difference<bestdiff)
            {
                bestdiff=difference;
                a=ns[i];
                b=ns[j];
            }
        }

    }
    cout << a << " " << b << endl;
}