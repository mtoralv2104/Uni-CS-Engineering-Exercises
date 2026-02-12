#include <iostream>
#include <array> 
using namespace std;

const int N = 5;
typedef array<int, N> TVec;

int maxDistBetwReps(TVec a, int x);
int main() {

return 0;
}

int maxDistBetwReps(TVec a, int x) {
    int firstPos = -1;
    int lastPos = -1;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == x) {
            if (firstPos == -1) {
                firstPos = i;
            }
            lastPos = i;
        }
    }

    if (firstPos == -1) {
        return -1;
    }

    if (firstPos == lastPos) {
        return 0;
    }

    return lastPos - firstPos;
}

