#include <iostream>
#include <array>

using namespace std;

const int N = 3;
typedef array<int,N> TVec;

int main()
{
    void printrra(TVec a);

    printrra((TVec){{1,20,3}}); 
    cout << endl;

return 0;
}

void printrra(TVec a)
{
    for(int i=(a.size()-1); i>=0 ;i--)
    {
        cout << a[i] << " ";
    }
}
