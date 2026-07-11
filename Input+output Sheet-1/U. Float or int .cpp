/*
Given a number N
. Determine whether N
 is float number or integer number.

Note:

If N
 is float number then print "float" followed by the integer part followed by decimal part separated by space.
If N
 is integer number then print "int" followed by the integer part separated by space.
For more clarification see the examples below.

Input
Only one line containing a number N
 (1≤N≤103)

Output
Print the answer required above.
*/

#include <iostream> 
#include <iomanip> 

using namespace std ; 

int main ()
{
    float num , check ; 

    cin >> num ;

    check = num - int(num) ; 
    
    if ( check == 0  )
    {
        cout << "int " << int(num) ;  
    }

    else if ( check != 0 )
    {
        cout << "float " << int(num) << " " << fixed << setprecision(3) <<  check ; 
    }

    return 0 ; 

}