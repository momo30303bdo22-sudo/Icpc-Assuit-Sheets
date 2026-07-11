#include <iostream> 

using namespace std ;
 
int main ()
{
    int N , num1 , num2 ; 

    cin >> N ; 

    for (int i = 1 ; i <= N ; i++ )
    {
        cin >> num1 >> num2 ; 

        if (num1 >= num2)
        {
            int sum = 0 ; 
            for (int i = (num2 + 1) ; i <= (num1 -1 ) ; i++)
            {
                if ( i % 2 != 0 )
                {
                    sum += i ; 
                }
            }
            cout << sum << endl ; 
        }

        else if (num2 >= num1)
        {
            int sum = 0 ; 
            for (int i = (num1 + 1) ; i <= (num2 - 1)  ; i++)
            {
                if ( i % 2 != 0 )
                {
                    sum += i ; 
                }
            }
            cout << sum << endl ;
        }
    }

    return 0 ;
}