#include <iostream>
 
using namespace std ; 
 
int main ()
{
    int n ; 
    cin >> n ; 
    
    int array[n] , nums , min , index  ; 
    
    for (int i = 0 ; i < n ; i++)
    {
        cin >> nums ; 
        array[i] = nums ; 
    }
    
    min = array[0] ; 
    index = 0 ; 
    
    for (int j = 0 ; j < n ; j++)
    {
        if(min > array[j])
        {
            min = array[j] ; 
            index = j ; 
        }
    }
    
    cout << min << " " << index +1 ; 
    
    return 0 ; 
}
