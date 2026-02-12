// 09sort.cpp
// Marcos Torres 1.10.25

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter 3 integers: " << endl ;
    cin >> a >> b >> c;

    int nums[3] = {a, b, c};

    sort(nums, nums + 3);

    cout << "Ordered: " << nums[0] << " " << nums[1] << " " << nums[2] << endl;

    return 0;
}