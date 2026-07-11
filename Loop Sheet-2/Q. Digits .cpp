/*

Given a number N. Print the digits of that number from right to left separated by space.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109)

Output
For each test case print a single line contains the digits of the number separated by space.
*/

#include <iostream>

using namespace std ; 

int main ()
{
    int N , num , temp ; 

    cin >> N ; 

    for ( int i = 1 ; i <= N ; i++ )
    {
        cin >> num ;

        temp = num ;

        if (num == 0 )
        {
            cout << num ;
            cout << "\n" ; 
        }
        else if ( num != 0 )
        {
        while (num > 0 )
        {
            temp = num % 10 ; 

            cout << temp << " "  ; 

            num = num / 10 ; 
        }
        
        cout << endl ; 

        }
        }   

    return 0 ; 
}