#include <iostream> 

using namespace std ; 

int main ()
{
    int num1 , num2 , num3 ;

    cin >> num1 >> num2 >> num3 ; 
    
    // int sum1 = 0 ; 
    // for (int i = num2 ; i <= num3 ; i++)
    // {
    //     sum1 += i ; 
    // }

    int x , sum_digit = 0 , digit , sum2 = 0 ; 
   for (int j = num2 ; j <= num3 ; j++)
   {
     for (int j = num3+1 ; j <= num1 ; j++)
    {
        x = j ; 
        
        sum_digit = 0 ; 
        while ( x > 0 )
        {
            digit = x % 10 ; 
            sum_digit += digit ; 
            x = x / 10 ; 
        }

        if (sum_digit == num2 || sum_digit == num3)
        {
            cout << j << " " ; 
        } 
    }
   }
   

   
}