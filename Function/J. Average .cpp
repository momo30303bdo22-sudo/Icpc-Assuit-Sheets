#include <iostream> 
#include <iomanip> 

using namespace std ;

double Avg(double array[] , int N)
{
    double  sum = 0 , avg ; 

    for (int i = 0 ; i < N ; i++)
    {
        sum += array[i] ; 
    }

    avg = sum / N ;  

    return avg ; 


}

int main ()
{
    int N ; 
    double  nums ; 

    cin >> N ; 

    double array[N] ; 

    for (int i = 0 ; i < N ; i++ )
    {
        cin >> nums ; 
        array[i] = nums ; 
    }

    Avg(array , N) ;

    double the_avg = Avg(array , N) ; 

    cout<< fixed << setprecision(6) << the_avg << " " ; 
    
    return 0 ; 

}