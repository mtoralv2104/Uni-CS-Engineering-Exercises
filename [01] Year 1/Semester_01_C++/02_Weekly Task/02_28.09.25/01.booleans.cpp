// 01.booleans.cpp
// Marcos T 2025-09-24

#include <iostream>
using namespace std;

int main() {
    cout << "true and true -> " << (true && true) << endl;
    cout << "false and true -> " << (false && true) << endl;
    cout << "1 == 1 and 2 == 1 -> " << ((1 == 1) && (2 == 1)) << endl;
    cout << "test == test -> " << ("test" == "test") << endl;
    cout << "1 == 1 or 2 != 1 -> " << ((1 == 1) || (2 != 1)) << endl;
    cout << "true and 1 == 1 -> " << (true && (1 == 1)) << endl;
    cout << "test == testing -> it has no sense" << endl;
    cout << "1 != 0 and 2 == 1 -> " << ((1 != 0) && (2 == 1)) << endl;
    cout << " "" == '' -> it has no sense" << endl; 
    cout << "test == 1 -> it has no sense" << endl;
    cout << "not (true and false) -> " << (!(true && false)) << endl;
    cout << "not (1 == 1 and 0 != 1) -> " << (!((1 == 1) && (0 != 1))) << endl;
    cout << "not (10 == 1 or 100 == 100) -> " << (!((10 == 1) || (100 == 100))) << endl;
    cout << "not (1 != 10 or 3 == 4) -> " << (!((1 != 10) || (3 == 4))) << endl;
    cout << "\"testing\" == \"testing\" and \"Zed\" == \"Cool Guy\" -> " << (("testing" == "testing") && ("Zed" == "Cool Guy")) << endl;
    cout << "1 == 1 and not (\"testing\" == 1 or 1 == 0) -> " << "It has no sense" << endl;
    cout << "\"chunky\" == \"bacon\" and not (3 == 4 or 3 == 3) -> " << (("chunky" == "bacon") && !(3 == 4 || 3 == 3)) << endl;
    cout << "3 == 3 and not testing == testing || Ruby == Fun -> " << (3 == 3 && !("testing" == "testing" || "Ruby" == "Fun")) << endl;

    return 0;
}
