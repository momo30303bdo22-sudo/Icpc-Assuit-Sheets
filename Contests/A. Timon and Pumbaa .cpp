#include <iostream> 

using namespace std ; 

int main ()
{
    int candies1 , candies2 ; 

    cin >> candies1 >> candies2 ; 

    int sum = candies1 - candies2 ; 

    if (sum >= 0 )
    {
        cout << sum ; 
    }

    else 
    {
        while (sum < 0 )
        {
            cout << 0 << endl  ; 
            cin >> candies1 >> candies2 ;
            sum = candies1 - candies2 ;
        }

        if(sum >= 0 )
        {
            cout << sum ; 
        }
    }
}