#include <iostream>

using namespace std ; 

int main ()
{
    double  num1 , num2 , num3 ; 

    cin >> num1 >> num2 >> num3 ; 

    double sum = (num1 * num2) / num3 ; 

    double Firction = static_cast <double>(sum) - static_cast <long long>(sum) ; //Type_casting  

    if ( Firction != 0  )
    {
        cout << "double" ; 
    }

    else if (sum >= INT_MIN && sum <= INT_MAX)
    {
        cout << "int" ; 
    }

    else 
    {
        cout << "long long" ; 
    }

    return 0 ; 

}