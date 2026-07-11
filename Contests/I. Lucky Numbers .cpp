#include <iostream> 

using namespace std ;

int main ()
{
    int num ; 

    cin >> num ; 

    int temp1 = num % 10 ; 

    num = num / 10 ; 

    int temp2 = num % 10 ; 

    if (temp1 % temp2 == 0 || temp2 % temp1 == 0)
    {
        cout << "YES" ; 
    }

    else 
        cout << "NO" ; 

    return  0 ; 

}