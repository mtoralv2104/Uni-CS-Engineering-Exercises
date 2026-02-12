// 07order.cpp
// Marcos Torres 18-11-25

#include <iostream>
#include <string>
using namespace std;


int main()
{

    int strcmp(string a, string b);
    cout << strcmp("a", "b") << endl; // -1
    cout << strcmp("b", "a") << endl; // 1
    cout << strcmp("a", "a") << endl; // 0
    cout << strcmp("avion", "avioneta") << endl;// -1
    cout << strcmp("ave", "avioneta") << endl; // -1
    cout << strcmp("avioneta", "ave") << endl; // 1

return 0;
}

int strcmp(string a, string b)
{
int i=0;
while (i < a.length() and i < b.length() and a[i] == b[i]){
    i++;
}
if( a[i] == b[i]){
    return 0;
}
else if ( a[i] < b[i]){
    return -1;
}
else if( a[i] > b[i]){
    return 1;
}

}