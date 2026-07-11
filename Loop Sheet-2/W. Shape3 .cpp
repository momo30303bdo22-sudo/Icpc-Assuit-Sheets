#include <iostream>

using namespace std ; 

int main ()
{
    int n ; 

    cin >> n ; 

    for (int i = 1 ; i <= n ; i++ )
    {
        for (int j = (n-1) ; j >= i ; j--)
        {
            cout << ' ' ; 
        }

        for (int l = 1 ; l <= ((2*i) - 1) ; l++ )
        {
            cout << '*' ; 
        }
        cout << endl ; 
    }

    for (int i = n ; i >= 1 ; i--)
    {
        
        for (int  l = 1 ; l <= n-i ; l++)
        {
            cout << ' ' ; 
        }


        for (int j = 1 ; j <= (2*i - 1) ; j++ )
        {
            cout << '*' ; 
        }
        cout << "\n" ;

    }

    return 0 ; 

    
}