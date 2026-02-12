#include <iostream>
#include <array>

using namespace std;

const int N = 3;
typedef array<int,N> TVec;

int main()
{
    void printArr(TVec);
    int numberOfNeg(TVec);

    TVec a = {{1, -22, 0}};

    printArr(a); cout << endl;

    cout << "Total number of negatives: " << numberOfNeg(a) << endl;
    a = (TVec){{0, 1, 0}};

    printArr(a); cout << endl;

    cout << "Total number of negatives: " << numberOfNeg(a) << endl;

return 0;
}

int numberOfNeg(TVec a)
{
    int NNegs=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<0)
        {NNegs++;}
    }
    return NNegs;
}

void printArr(TVec a)
{
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
}