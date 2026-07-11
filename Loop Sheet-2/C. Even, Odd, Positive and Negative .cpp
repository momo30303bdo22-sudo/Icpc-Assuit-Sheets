#include <iostream> 

using namespace std ; 

int main ()
{
    int num_of_cin , num ,  Even = 0  , Odd = 0  , Pos = 0  , Neg = 0 ; 

    cin >> num_of_cin ; 

    for (int i = 1 ; i <= num_of_cin ; i++)
    {
        cin >> num ; 

        if (num % 2 == 0 )
            Even++ ;
        else if (num % 2 != 0 )
            Odd++ ; 
        if (num > 0 )
            Pos++ ; 
        else if (num < 0 )
            Neg++ ;  
    }

    cout << "Even: " << Even << endl  ; 
    cout << "Odd: " << Odd << endl  ; 
    cout << "Positive: " << Pos << endl  ; 
    cout << "Negative: " << Neg << endl  ; 

    return 0 ; 
}