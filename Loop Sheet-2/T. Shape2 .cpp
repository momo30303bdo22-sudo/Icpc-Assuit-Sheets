#include <iostream> 

using namespace std ; 

int main ()
{
    int num ; 

    cin >> num ; 

    for (int i = 1 ; i <= num ; i++ )
    {
        for (int j = (num-1) ; j >= i ; j--)
        {
            cout << ' ' ; 
        }

        for (int l = 1 ; l <= ((2*i)-1 ) ; l++)
        {
            cout << '*' ; 
        }
        cout << endl ; 
    }

    return 0 ; 
}