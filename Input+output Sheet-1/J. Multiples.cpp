/*
Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

Input
Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)

Output
Print the "Multiples" or "No Multiples" corresponding to the read numbers.
*/

#include <iostream>

using namespace std ;

int main ()
{
   int num1 , num2 ; 

   cin >> num1 >> num2 ; 

   if (num1 >= num2 )
   {
        if(num1 % num2 == 0 )
        {
            cout << "Multiples" ; 
        }
        else
            cout << "No Multiples" ; 

   }

   else if (num2 >= num1)
   {
        if (num2 % num1 == 0 )
        {
            cout << "Multiples" ;
        }

        else
        {
            cout << "No Multiples" ; 
        }
   }

   return 0 ; 

}
