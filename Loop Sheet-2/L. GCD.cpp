#include <iostream> 

using namespace std ; 

int main ()
{
    int num1 , num2 , var = 0 ; 

    cin >> num1 >> num2 ; 

    if (num1 > num2)
    {
        for (int i = 1 ; i <= num2 ; i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                if (var <= i)
                {
                    var = i ; 
                }
            }
        }

        cout << var ; 
    }

    else if (num1 < num2)
    {
        for (int i = 1 ; i <= num1 ; i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                if (var <= i)
                {
                    var = i ; 
                }
            }
        }

        cout << var ;

    }

    else if (num1 == num2)
    {
        cout << num1 ; 
    }

    return 0 ; 
}