#include <iostream>
using namespace std;
int main()
{
    int i=3;
    cout << ++i << endl ;
    i = 3;
    cout << i++ << endl;
    i = 3;
    cout << i++ + i << endl;
    return 0;

}