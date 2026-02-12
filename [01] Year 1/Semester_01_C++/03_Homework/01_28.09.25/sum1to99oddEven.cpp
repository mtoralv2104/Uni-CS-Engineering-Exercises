# include <iostream>
using namespace std ;
int main () {
float sum;

for (int i = 1; i <= 100; i++){ // only one loop, no conditionals

    sum = sum + (((i % 2)*2 - 1) * i) ;

}

cout << " The sum of even numbers minus the odd ones from 1 to 100 is: " << sum << endl ;
return 0;

}