#include <iostream> 

using namespace std ; 

long long eqution (int  x , int n )
{
   
    long long  fact = 1 , sum = 0   ; 

    for (int i = 0 ; i <= n ; i++)
    {
        if (i % 2 == 0)
        {
            fact = 1 ; 
            for (int j = 1 ; j <= i ; j++)
            {
                fact *= x ; 

            }

            sum += fact ; 
        }
    }

    sum = sum-1 ; 

    return sum   ; 

}
int main ()
{
    int x , n ; 

    cin >> x >> n ; 

    eqution(x , n) ; 

    long long result = eqution(x , n) ; 

    cout << result ; 

    return 0 ; 
  
}