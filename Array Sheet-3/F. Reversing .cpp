#include <iostream> 
 
using namespace std ; 
 
int main ()
{
    int n  ; 
    cin >> n ; 
    
    int array[n] , nums ; 
    
    for (int i = 0 ; i < n ; i++)
    {
        cin >> nums ; 
        array[i] = nums ; 
    }
    
    for(int j = (n-1) ; j >= 0 ; j-- )
    {
        cout << array[j] << " " ; 
    }
    
    return 0 ; 
}
