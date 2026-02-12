#include <iostream>
#include <array>

using namespace std;

const int N = 2;
typedef array<int, N> TCoord;

int absolute(int i) {
    return (i < 0) ? -i : i;
}

int manhattanDistance(TCoord pointA, TCoord pointB) {
    int x1 = pointA[0];
    int y1 = pointA[1];
    int x2 = pointB[0];
    int y2 = pointB[1];
    
    int dx = absolute(x1 - x2);
    int dy = absolute(y1 - y2);
    
    return dx + dy;
}

int main() {
    cout << "Test 1: " << manhattanDistance(TCoord{1, 1}, TCoord{1, 1}) << endl; 
    cout << "Test 2: " << manhattanDistance(TCoord{5, 4},TCoord{3, 2}) << endl; 
    cout << "Test 3: " << manhattanDistance(TCoord{1, 1}, TCoord{0, 3}) << endl; 
    cout << "Test 4: " << manhattanDistance(TCoord{10, 5}, TCoord{1, 1}) << endl; 
    
    return 0;
}