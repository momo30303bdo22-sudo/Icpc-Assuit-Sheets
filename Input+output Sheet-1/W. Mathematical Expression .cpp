/*
Given a mathematical expression. The expression will be one of the following expressions:

A + B = C, A - B = C and A * B = C

where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

Input
Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

Output
Output either "Yes" (without the quotation) or the right answer depending on the statement
*/

#include <iostream> 

using namespace std ; 

int main ()
{
    int num1 , num2 , result , sum  ; char ope , sign ; 

    cin >> num1 >> ope >> num2 >> sign >> result ; 

    if (ope == '+')
    {
        sum = num1 + num2 ; 

        if (sum == result)
        {
            cout << "Yes" ; 
        }

        else    
            cout << sum ; 
    }
    else if (ope == '-')
    {
        sum = num1 - num2 ; 

        if (sum == result)
        {
            cout << "Yes" ; 
        }

        else    
            cout << sum ; 
    }
    if (ope == '*')
    {
        sum = num1 * num2 ; 

        if (sum == result)
        {
            cout << "Yes" ; 
        }

        else    
            cout << sum ; 
    }
    if (ope == '/')
    {
        sum = num1 / num2 ; 

        if (sum == result)
        {
            cout << "Yes" ; 
        }

        else    
            cout << sum ; 
    }

    return 0 ; 
}