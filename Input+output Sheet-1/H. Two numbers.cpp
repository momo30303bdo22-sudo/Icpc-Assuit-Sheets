/*
Given 2 numbers A
 and B
. Print floor, ceil and round of A/B

Note:

Floor: Is a mathematical function that takes a real number X
 and its output is the greatest integer less than or equal to X
.
Ceil: Is a mathematical function that takes a real number X
 and its output is the smallest integer larger than or equal to X
.
Round: Is a mathematical function that takes a real number X
 and its output is the closest integer to that number X
.
*/

#include <iostream>

using namespace std ;

int main ()
{
    double  num1 , num2 , result ;

    cin >> num1 >> num2 ;

    result = num1 / num2 ;

    cout << "floor " << num1 << " / " << num2 << " = " << int (result) << endl  ;
    
    if (num1 == num2)
    {
        cout << "ceil " << num1 << " / " << num2 << " = " << int (result) << endl  ;
    }
    else 
    {
    cout << "ceil " << num1 << " / " << num2 << " = " << int (result) + 1 << endl   ;
    }
    if (result >= int (result) + 0.5 )
        cout << "round " << num1 << " / " << num2 << " = " << int(result) + 1 << endl ;
    else if (result < int (result) + 0.5)
        cout << "round " << num1 << " / " << num2 << " = " << int (result) << endl  ;

    return 0 ;

}
