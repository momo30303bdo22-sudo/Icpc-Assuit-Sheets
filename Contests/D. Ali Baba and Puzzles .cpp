#include <iostream>

using namespace std ; 

int main () 
{
    long long x , y , z , c ; 
    cin >> x >> y >> z >> c ; 

    if ( x + y - z == c || x + y * z == c || x - y + z == c || x - y * z == c || x * y + z == c || x * y - z == c  )
    {
        cout << "YES" << endl ; 
    }
    else {cout << "NO" << endl ; }

    return 0 ;



}