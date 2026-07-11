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

    int min = array[0] ; 

    for (int j = 0 ; j < n ; j++)
    {
        if (min >= array[j])
        {
            min = array[j] ; 
        }
    }

    int count = 0 ; 
    for (int l = 0 ; l < n ; l++)
    {
        if (min == array[l])
        {
            count++ ; 
        }
    }

    if (count % 2 != 0 ){
        cout << "Lucky" ; 
    }

    else 
        cout << "Unlucky" ; 

    return 0 ; 
}