#include <iostream> 

using namespace std ; 

int main ()
{
    int num , count = 0  ; 

    cin >> num ; 

    if (num < 2)
    {
        cout << "NO" ; 
    }

    else if(num == 2)
    {
        cout << "YES" ; 
    }
    else if (num > 2 )
    {
        for (int i = 3 ; i < num ; i++)
        {
            if (num % i == 0 )
            {
                count++ ; 
            }
        }

        if (count == 0 )
        {
            cout << "YES" ; 
        }

        else 
            cout << "NO" ; 

    }

    
    return 0 ; 
}