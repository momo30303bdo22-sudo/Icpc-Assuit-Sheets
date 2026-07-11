/*

P ==> New Price    n ==> Discount  x ==> Price 

X - (n * X ) = P 
X (1- n) = p 

X = P / (1 - n )
*/

#include <iostream>
#include <iomanip>

using namespace std ; 

int main () 
{
    double Discount , New_Price ; 

    cin >> Discount >> New_Price ; 

    double Price = New_Price / (1 - (Discount / 100))  ; 

    cout << fixed << setprecision(2)  << Price ; 

    return 0 ; 

}