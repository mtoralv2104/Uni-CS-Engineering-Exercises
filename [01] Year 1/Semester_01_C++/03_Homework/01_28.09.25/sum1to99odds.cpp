# include <iostream>
using namespace std ;
int main () {
int sum = 0;
int i = 1;
while (i <= 99) {

    if (i % 2 == 1)
    
        sum = sum + i;


i = i + 1; 
}
cout << " The sum of odd numbers from 1 to 99 is: " << sum << endl ;
return 0;
}