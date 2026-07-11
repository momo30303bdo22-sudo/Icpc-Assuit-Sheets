/*

Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes

*/

#include <iostream> 

using namespace std ; 

int main () 
{
    long long num1 , num2 ; 

    cin >> num1 >> num2 ; 

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl ; 
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl ; 
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl ; 

    return 0 ; 
}