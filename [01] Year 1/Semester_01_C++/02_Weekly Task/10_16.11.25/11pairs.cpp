#include <iostream>
#include <array> 
using namespace std;

const int N = 5;
typedef array<int, N> TVec;

int pairsDiff(TVec a, int n) {
    int count = 0;
    int size = a.size();

    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            
            int diff = a[i] - a[j];
            if (diff < 0) {
                diff = -diff;
            }

            if (diff == n) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    cout << "Test 1: " << pairsDiff(TVec{1, 1, 5, 6, 9}, 4) << endl; 
    cout << "Test 2: " << pairsDiff(TVec{1, 1, 3, 3, 9}, 2) << endl; 
    cout << "Test 3: " << pairsDiff(TVec{10, 8, 5, 2}, 3) << endl; 
    
    return 0;
}