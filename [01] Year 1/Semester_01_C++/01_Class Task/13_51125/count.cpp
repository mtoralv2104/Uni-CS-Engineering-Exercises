//  count.cpp
// Marcos Torres 05-11-25

#include <iostream>
#include <vector>
using namespace std;
using TVec = vector<int>;

int main() 
{
    int count(const TVec& v, int x);
    TVec v = {1, 4, -3, 4, 5};

    cout << "count(v, 4): " << count(v, 4) << endl;
    cout << "count(v, 10): " << count(v, 10) << endl;

    return 0;
}


int count(const TVec& v, int x) {
    int c = 0;
    for (int value : v) {
        if (value == x)
            c++;
    }
    return c;
}
