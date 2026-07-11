/*
Given a mathematical expression. The expression will be one of the following expressions: A+B
, A−B
, A∗B
 and A/B
.

Print the result of the mathematical expression.

Input
Only one line contains A,S
 and B
 (1≤A,B≤104)
, S
 is either (+,−,∗,/)
.

Output
Print the result of the mathematical expression.
*/

#include <iostream> 

using namespace std ;

int main ()
{
    int num1 , num2 ; char ope ; 
    
    cin >> num1 >> ope >> num2 ; 

    switch (ope)
    {
    case '+' :
    {
        cout << num1 + num2 ;
        break ; 
    }

    case '-' : 
    {
        cout << num1 - num2 ;
        break ;
    }
    
    case '*' : 
    {
        cout << num1 * num2 ;
        break ;
    }
    
    case '/' : 
    {
        cout << num1 / num2 ;
        break ;
    }
}

    return 0; 

}