
#include <iostream> 

using namespace std ; 

int main ()
{
    int num ; 
    cin >> num ; 

    int temp = num ; 

    int digit , reverse = 0 ; 

    while (temp > 0 )
    {
        digit = temp % 10 ;
        reverse = (reverse * 10) + (temp % 10) ; 
        temp = temp /10 ; 
    }

    if (reverse == num)
    {
        cout << num << endl ;
        cout << "YES" ;  
    }

    else if (reverse)
    {
        cout << reverse << endl ; 
        cout << "NO" ; 

    }

    return 0 ; 
    



}