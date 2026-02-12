// 00.sum1to100.cpp
// <Marcos Torres> <2025-09-20>
// I believe this code sums the numbers from 1 to 100 >
# include <iostream>
using namespace std ;
int main () {
int sum = 0;
int i = 1;
while (i <= 100) {
sum = sum + i;
i = i + 1; // update loop variable
}
cout << " The sum from 1 to 100 is: " << sum << endl ;
return 0;
}