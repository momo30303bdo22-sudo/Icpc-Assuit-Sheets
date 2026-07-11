/*
Given multiple lines each line contains two numbers N and M.

For each line print a single line contains:

The numbers between N and M inclusive separated by single space.
The message " sum =".
The summation of all numbers between N and M inclusive.
Note: The program should be TERMINATED as soon as any of these two numbers is less than or equal to zero and don't print any thing.

For more clarification see the examples below.

Input
The input contains multiple line.

Each line contains two numbers N and M (-100 ≤ N, M ≤ 100).

It's guaranteed that the last line of the input will contain a number that is less than or equal to zero.

Output
For each line print the answer according to the required above in a single line

*/

#include <iostream> 

using namespace std ;

int main ()
{
    int num1 , num2   ; 

    cin >> num1 >> num2 ; 

    while (num1 > 0 && num2 > 0 )
    {
        if (num1 >= num2)
        {
            int sum = 0 ; // Local Variable in if 
            for (int i = num2 ; i <= num1 ; i++)
            {
                cout << i << " " ; 
                sum += i ; 
            }
            cout << "sum =" << sum << endl ; 
        }

        else if (num2 >= num1)
        {
            int sum = 0 ; // Local Variable in else if  
            for (int i = num1 ; i <= num2 ; i++)
            {
                cout << i << " " ; 
                sum += i ; 
            }
            cout << "sum =" << sum << endl ;

        }

        cin >> num1 >> num2 ; 
    }

    return 0 ; 
}