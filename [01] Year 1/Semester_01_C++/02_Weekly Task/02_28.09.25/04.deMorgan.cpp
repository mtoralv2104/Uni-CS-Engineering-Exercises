# include <iostream>
using namespace std ;


int main () {

int x,y;

cout << "Select your first number: ";
cin >> x;

cout << "\n";

cout << "Select your first number: ";
cin >> y;

cout << (!(x < y) || !(y > 5));


return 0;
}