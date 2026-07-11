#include <iostream> 

using namespace std ; 

int swap (int num1 , int num2 )
{
    int num3 = num2 ; 
    num2 = num1 ; 
    num1 = num3 ; 

    cout << num1 << " " << num2 ; 

    return 0 ; 
}

int main ()
{
    int num1 , num2 ; 

    cin >> num1 >> num2 ; 

    swap (num1 , num2) ; 
}