#include <iostream> 

using namespace std ; 

int main ()
{
    int num1 , num2 ;  bool found = false  ; 

    cin >> num1 >> num2 ;
    
    int digit , temp ; 
    for (int i = num1 ; i <= num2 ; i++)
    {
        bool check = true ; 
        temp = i ; 
        while (temp > 0)
        {
            if (temp % 10 != 4 && temp % 10 != 7)
            {
                check = false ; 
                break ; 
            }

            temp = temp / 10 ;   
        }

        if (check )
        {
            found = true ; 
            cout << i << " " ;
        }

    }

    if (found == false)
    {
        cout << "-1\n" ; 
    }

    return 0 ; 
        
}