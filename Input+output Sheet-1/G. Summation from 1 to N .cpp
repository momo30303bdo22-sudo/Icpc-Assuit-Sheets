/*

by partial sum in math2 semister 2  : 

.∑i=1Ni

s1 = 1 

s2 = s1 + a2 = 1 + 2 = 3 

s3 = s2 + a3 = 3 + 3 = 6 

s4 = s3 + a4 = 6 + 4 = 10 

s5 = s4 + a5 = 10 + 5 = 15 

sn = n(n+1)/2

*/


#include <iostream> 

using namespace std ; 

int main ()
{
    long long num; 

    cin >> num ; 

    long long sum = (num*(num + 1)) /2 ; 

    cout << sum ; 
}