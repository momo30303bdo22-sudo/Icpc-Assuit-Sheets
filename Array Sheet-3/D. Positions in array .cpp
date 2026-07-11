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
        
        if (array[i] <= 10)
        {
            cout << "A[" << i << "] = " << array[i] << endl  ;  
        }
    }
    
    return 0 ; 
}
