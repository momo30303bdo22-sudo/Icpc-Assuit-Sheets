#include <iostream> 

using namespace std ;

int max (int array[] , int N)
{
    int max = 0 ; 
    for (int i = 0 ; i < N ; i++)
    {
        if (max <= array[i])
        {
            max = array[i] ; 
        }
    }

    return max ; 


}

int min(int array[] , int N)
{
    int min = array[0] ;
    for (int i = 0 ; i < N ; i++)
    {
        if (min >= array[i])
        {
            min = array[i] ; 
        }
    } 

    return min ; 
}




int main ()
{
    int N , nums ; 

    cin >> N ; 

    int array[N] ; 

    for (int i = 0 ; i < N ; i++ )
    {
        cin >> nums ;
        
        array[i] = nums ; 
    }

    max (array , N ) ; 

    int the_max = max(array , N) ; 
    int the_min = min(array , N) ; 

    cout << the_min << " " << the_max ;

    return 0 ; 

     

}