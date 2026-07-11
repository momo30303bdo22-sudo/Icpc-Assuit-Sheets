#include <iostream> 

using namespace std ; 

int Add (long long  x , long long y )
{
    long long sum =  x + y ; 

    return sum ; 

}

int main ()
{
    long long num1 , num2 ; 

    cin >> num1 >> num2 ; 
    
    long long result = Add(num1 , num2) ; 

    cout << result << endl  ; 
}