// 2biggest.cpp
// Marcos Torres 10-11-25

#include <iostream>
#include <cstdlib>
#include <array>
using namespace std;

const int N = 100 ;
typedef array<int, N> Tvec;

main()
{
    void randomFill(Tvec& a);
    int smallestpos(Tvec a);
    void swap(Tvec& a, int posA, int posB);

    Tvec a;
    randomFill(a);

    for (int i=0 ; i<N ; ++i)
    {
        cout << a[i]<<endl;
    }



return 0;
}

void randomFill(Tvec& a)
{
    for (int i=0 ; i<N ; ++i)
    {
        a[i] = rand()%N;
    }

}

int smallestpos(Tvec a)
{
    int smallest, i;
    for ( i=0 ; i<=N ; i++)
    {
        if (i==0)
        {
            smallest=a[i];
        }
        if (smallest>a[i])
        {
            smallest=a[i];
        }
    }
return i;
}

void swap(Tvec& a, int posA, int posB)
{
    int temp = a[posA];
    a[posA] = a[posB];
    a[posB] = temp;

}