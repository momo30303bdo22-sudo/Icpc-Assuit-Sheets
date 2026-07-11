#include <iostream> 

using namespace std ; 

int main ()
{
    int N , num1 = 1 , num2 = 2 , num3 = 3  ;
    
    cin >> N ;

    cout << num1 << " " << num2 << " " << num3 << " PUM" << endl ; 

    for (int i = 1 ; i < N ; i++ )
    {
        cout << num1 + 4 << " " << num2 + 4 << " " << num3 + 4 << " PUM" << endl ; 
        num1 += 4 ; 
        num2 += 4 ; 
        num3 += 4 ; 
    }

    return 0 ; 

}