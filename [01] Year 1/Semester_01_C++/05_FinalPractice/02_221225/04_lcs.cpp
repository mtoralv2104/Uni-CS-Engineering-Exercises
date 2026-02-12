#include <iostream>
#include <array>

using namespace std;

const int N = 15;
typedef array<int,N> TVec;

int main()
{
    void closestSum(TVec ns, int goal,int& a, int& b);
    cout << lcs((TVec){{3,9,9,0,9,3,9,9,9,9,9,3,9,9,0}}) << endl; // 3
return 0;
}

int lcs(TVec a)
{
    int counter=0, maxcount=0;
    for(int i = 0; i<a.size()-1; i++)
    {
        if(a[i]==a[i+1])
        {
            counter++;
        }
        else{
            counter=0;
        }
        if(counter>maxcount)
        {
            maxcount=counter;
        }

    }
    return maxcount+1;
}
