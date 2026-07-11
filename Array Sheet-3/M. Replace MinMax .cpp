#include <iostream> 

using namespace std ;
 
int main ()
{
    int n ; 
    cin >> n ; 

    int array[n] , nums , max = 0 , min , index_max , index_min ; 

    for (int i = 0 ; i < n ; i++)
    {
        cin >> nums ; 
        array[i] = nums ; 

        if (max <= array[i])
        {
            max = array[i] ; 
            index_max = i ; 
        }
    }

    min = array[0] ; 

    for (int j = 0 ; j < n ; j++)
    {
        if (min >= array[j])
        {
            min = array[j] ; 
            index_min = j ; 
        }
        
    }

    array[index_min] = max ; 
    array[index_max] = min ;
    
    for (int l = 0 ; l < n ; l++)
    {
        cout << array[l] << " " ; 
    }

    return 0 ; 


}