/*
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.
*/


#include <iostream> 

using namespace std ;

int main ()
{

    int num1 , num2 , num3 ; 

    cin >> num1 >> num2 >> num3 ; 

    if (num1 >= num2 && num1 >= num3 )
    {
        if(num2 >= num3 )
        {
            cout << num3 << " " << num1 ; 
        }

        else if(num2 <= num3 )
        {
            cout << num2 << " " << num1 ; 
        }
    }

    else if (num2 >= num1 && num2 >= num3 )
    {
        if(num1 >= num3)
        {
            cout << num3 << " " << num2 ; 
        }

        else if(num1 <= num3)
        {
            cout << num1 << " " << num2 ; 
        }
    }

    else if (num3 >= num1 && num3 >= num1 )
    {
        if(num1 >= num2)
        {
            cout << num2 << " " << num3 ;
        }

        else if(num1 <= num2)
        {
            cout << num1 << " " << num3 ;
        }
    }

    return 0 ; 
    

}