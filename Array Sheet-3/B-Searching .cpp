#include <iostream> 
 
using namespace std ; 
 
int main ()
{
    int n ; 
    
    cin >> n ; 
    
    
    int array[n] , nums ; 
    
    for (int i = 0 ; i < n ; i++)
    {
        cin >> nums ; 
        
        array[i] = nums ; 
    }
    
    int Number ; 
    cin >> Number ; 
    int count = 0  ;     
    for (int j =  0 ; j < n ; j++)
    {
        if (Number == array[j])
        {
            cout << j ; 
            break ; 
        }
        
        else if (Number != array[j])
        {
            count++ ; 
            
        }
        
    }
    
    if ( count == n )
    {
        cout << -1 ; 
    }

    return 0 ; 
}