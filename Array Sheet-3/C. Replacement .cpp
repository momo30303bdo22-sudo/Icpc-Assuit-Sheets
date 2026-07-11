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
        
        if (array[i] > 0 )
        {
            array[i] = 1 ; 
        }
        
        else if (array[i] < 0 )
        {
            array[i] = 2 ; 
        }
        
        else 
            array[i] = 0 ; 
    }
    
    for (int j =  0 ; j < n ; j++)
    {
        cout << array[j] << " " ; 
    }
    
    return 0 ; 
    
    
}
