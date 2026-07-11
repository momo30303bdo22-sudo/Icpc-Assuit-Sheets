#include <iostream>

using namespace std ; 

int main ()
{
    int num ; 

    cin >> num ; 

    if (num == 1999)
    {
        cout  << "Correct" ; 
    }

    else if (num != 1999)
    {
        cout << "Wrong" << endl  ; 
        while ( num != 1999 )
        {
            cin >> num ; 

            if (num == 1999)
            {
                cout << "Correct" ; 
                break ; 
            }

            else if ( num != 1999)
            {
                cout << "Wrong" << endl ; 
                continue;
            }
        }
    }

    return 0 ; 
}