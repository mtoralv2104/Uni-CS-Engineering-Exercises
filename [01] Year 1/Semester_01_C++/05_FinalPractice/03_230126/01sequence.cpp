#include <iostream>
#include <array>

using namespace std;

const int N = 15;
typedef array<int, N> TVec;


int main()
{

    int lcs(TVec a);
    cout << lcs((TVec){{3,9,9,0,9,3,9,9,9,8,9,9,9,9,9}});



return 0;
}

    
int lcs(TVec a)
{
    int largestSequence=0,currentsequence=1;
    for(int i=0; i<a.size();i++)
    {
        if(i==0)
        {
           currentsequence=1; 
        }
        else
        {
            if(a[i]==a[i-1])
            {
                currentsequence++;
            }
            else
            {
                if(currentsequence>largestSequence)
                {
                    largestSequence=currentsequence;
                }
                currentsequence=1;
            }
        } 
    }
    if(currentsequence>largestSequence)
    {
        largestSequence=currentsequence;
    }
    return largestSequence;
}