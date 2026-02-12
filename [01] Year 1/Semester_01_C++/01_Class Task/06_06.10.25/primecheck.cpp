#include <iostream>
#include <cstdlib>
using namespace std;

main()
{

    cout << "Starting prime number calculator" << endl;
    system("pause");
    
    for(int i=3; i < 100; i++)
    {
        cout << "Testing number " << i << endl;
        bool prime = false;
        int checker = i - 1;
        for (i; (checker > 0);checker=checker-1)
        {

            if (i % checker == 0)
            {
                prime = true;
                cout << "Number " << i << " is prime" << endl;
            }
            else if (prime=false)
            {

            }


        }




    }



    system("pause");
return 0;
}