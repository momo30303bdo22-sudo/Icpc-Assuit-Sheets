#include <iostream> 

using namespace std ; 

int main ()
{

    int num , count ; 
    cin >> num ; 

    for (int i = 1 ; i <= num ; i++)
    {
        if (i < 2)
            continue;
        else if (i == 2)
            cout << 2 << " " ; 
        else if (i > 2)
        {
            count = 0 ; 
            for (int j = 2 ; j < i ; j++)
            {
                if (i % j == 0)
                {
                    count++ ; 
                }
            }

            if (count == 0)
            {
                cout << i << " " ; 
            }
        }
    }

    return 0 ; 
    
}