/*
Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".
*/

#include <iostream> 

using namespace std ; 

int main ()
{
    int num ; 

    cin >> num ; 

    int first_digit = num / 1000 ; // to remove 3 digits  

    if (first_digit % 2 == 0 ) // to Checkness a number is even or odd
    {
        cout << "EVEN" ; 
    }

    else if ( first_digit % 2 != 0 ) 
        cout << "ODD" ; 
    return 0 ; 
}