/*
Given two numbers N and M. Print the summation of their last digits.

Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

Output
Print the answer of the problem.
*/

#include <iostream> 

using namespace std ; 

int main ()
{
    long long num1 , num2 ; 

    cin >> num1 >> num2 ; 

    int digit_one = num1 % 10 ; 
    int digit_two = num2 % 10 ;

    int sum = digit_one + digit_two ; 


    cout << sum ; 

    return 0 ; 


}