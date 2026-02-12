#include <iostream>
#include <array> 
using namespace std;

const int N = 5;
typedef array<int, N> TVec;

int main()
{


return 0;
}


int rfind(TVec arr, int x) {    
    for (int i = N - 1; i >= 0; i--) 
    {
        if (arr[i] == x) 
        {
            return i; 
        }
    }
    
    return -1;
}