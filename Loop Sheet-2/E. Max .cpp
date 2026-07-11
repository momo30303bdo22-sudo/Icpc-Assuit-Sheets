/*
Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.
*/

#include <iostream> 

using namespace std ; 

int main ()
{
    int N , num , max = 0  ; 

    cin >> N ; 

    for ( int i = 1 ; i <= N ; i++ )
    {
        cin >> num ; 

        if ( max <= num )
        {
            max = num ; 
        }

    }

    cout << max ; 

    return 0 ; 
}