# include <iostream>
using namespace std ;
int main () {

bool found = false;
int A=2, B=3, C=2;


cout << (( !found || (A = B)) && !(A = C) );

return 0;
}