#include <iostream> 

using namespace std ;

int main ()
{
    int n ; 
    cin >> n ; 

    int array[n] , nums , count = 0  ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> nums ; 
        array[i] = nums ; 

        if (array[i] % 2 ==0)
        {
            continue;
        }
        else if (array[i] % 2 != 0)
        {
            cout << 0 ;
            break ;  
        }
    } 

    for (int i = 0 ; i < n ; i++)
    {
        if (array[i] % 2 == 0 )
        {
            while (array[i] % 2 == 0)
            {
                count++ ; 
            }
            array[i] /= 2 ;  
        }
    }

     
}