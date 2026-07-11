/*
Given a number N. Print a left angled triangle that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.
*/

#include <iostream>
 
using namespace std ; 

int main ()
{
    int num_of_lines ; 

    cin >> num_of_lines ; 

    for (int i = 1 ; i <= num_of_lines ; i++ )
    {
        for (int j = 1 ; j <= i ; j++ )
        {
            cout << "*" ; 
        }
        cout << "\n" ; 
    }

    return 0 ; 
}