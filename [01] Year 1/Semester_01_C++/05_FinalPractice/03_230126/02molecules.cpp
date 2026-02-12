#include <iostream>
#include <array>

using namespace std;

const int N=3;

typedef array<array<int, N>,N> TSqMat;

int main()
{
TSqMat a = {{{{1,2,3}},{{4,5,6}},{{7,8,9}}}};

void PrintMatrix(TSqMat a);
TSqMat Identity(TSqMat a);
TSqMat write(TSqMat a);

a = write(a);
PrintMatrix( a);




return 0;
}

TSqMat write(TSqMat a)
{
    TSqMat b;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<< "Value for [" << i << "] [" << j << "] : ";
            cin>>b[i][j] ;
            cout << endl;
        }
        
    }

return b;
}

TSqMat Identity(TSqMat a)
{
    TSqMat b;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i==j)
            {
                b[i][j]=1;
            }
            else{
                b[i][j]=0;
            }
        }
        
    }

return b;
}


void PrintMatrix(TSqMat a)
{

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout << a[i] [j];
        }
        cout << endl;
    }
}