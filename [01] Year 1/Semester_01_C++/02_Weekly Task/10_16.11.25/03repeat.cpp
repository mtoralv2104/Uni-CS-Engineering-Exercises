#include <iostream>
#include <array> 
using namespace std;

const int N = 5;
typedef array<int, N> TVec;

int firstRep(TVec a) {
    for (int i = 0; i < a.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[j] == a[i]) {
                return i;
            }
        }
    }
    
    return -1;
}

int main() {
    cout << "Test 1 ({1, 2, 3, 2}): " << firstRep( (TVec{1, 2, 3, 2}) ) << endl;
    cout << "Test 2 ({1, 2, 1, 2}): " << firstRep( (TVec{1, 2, 1, 2}) ) << endl;
    cout << "Test 3 ({1, 2, 3, 4}): " << firstRep( (TVec{1, 2, 3, 4}) ) << endl; 
    cout << "Test 4 ({5, 6, 7, 5, 8}): " << firstRep( (TVec{5, 6, 7, 5, 8}) ) << endl;
    
    return 0;
}