// filename.cpp 
// Marcos Torres 17-11-25

#include <iostream>
#include <array>
using namespace std;

main()
{

string fileName(string path);
string path = "subject/int/helloWorld.cpp";
cout << fileName(path);

return 0;
}


string fileName(string path)
{
    size_t pos = path.rfind('/');

    if (pos == string::npos)
        return path;

    return path.substr(pos + 1);
}
