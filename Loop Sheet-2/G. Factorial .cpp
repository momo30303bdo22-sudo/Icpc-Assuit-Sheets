/*
Given a number N. Print the factorial of number N.

Input
First line contains a number T (1 ≤ T ≤ 15) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 20)

Output
For each test case print a single line contains the factorial of N.
*/

#include <iostream> 

using namespace std ;

int main ()
{

    int N , num ; long long fact = 1  ; 

    cin >> N ; 

    for ( int i = 1 ; i <= N ; i++ )
    {
        cin >> num ; 

        fact = 1 ; 
        for ( int j = num ; j > 0 ; j--)
        {
            fact *= j ; 
        }

        cout << fact << endl ; 
    }

    return 0 ; 
}

