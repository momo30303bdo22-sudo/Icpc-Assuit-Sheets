/*
iven a number N and an array A of N numbers. Print the absolute summation of these numbers.

absolute value : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (-109  ≤  Ai  ≤  109).

Output
Print the absolute summation of these numbers.
*/

#include <iostream>
#include <cmath>

using namespace std ; 

int main ()
{
    int N , num ; 

    cin >> N ; 

    int array[N] ; 

    for (int i = 0 ; i < N ; i++ )
    {
        cin >> num ; 

        array[i] = num ; 
    }  

    long long sum = 0 ; 
    for (int i = 0 ; i < N ; i++)
    {
        sum += array[i] ; 
    }

    if (sum >= 0 )
        cout << sum ;
    else 
        cout << abs(sum) ;  

    return 0 ; 
}