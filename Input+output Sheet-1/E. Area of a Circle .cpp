
/*
Given a number R calculate the area of a circle using the following formula:

Area = π * R2.

Note: consider π = 3.141592653.

Input
Only one line containing the number R (1  ≤  R  ≤  100).

Output
Print the calculated area, with 9 digits after the decimal point.
*/

#include <iostream>
#include <iomanip>
#define pi 3.141592653 // Because the pi is constant not var 


using namespace std ;

int main ()
{
    // Area of circle = pi * r^2 ;

    double r  ;

    cin >> r ;

    double Area = pi * (r*r) ;


    cout << fixed << setprecision(9) << Area ;

    return 0 ;

}