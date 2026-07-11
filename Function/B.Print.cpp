#include <iostream>
 
using namespace std ; 

int print (int x ) 
{
    for (int i = 1 ; i <= x ; i++)
    {
        cout << i  ;

        if (i < x )
            cout << " " ; 
        else if (i == x )
            break ; 
    }
     

    return 0 ; 
}


int main ()
{
    int num ; 
    cin >> num ; 

    print(num) ; 

    return 0 ; 

}

