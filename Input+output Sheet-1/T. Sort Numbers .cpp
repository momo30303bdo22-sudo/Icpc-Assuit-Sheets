/*Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.*/


#include <iostream> 

using namespace std ; 

int main () 
{
    int X , Y , Z ; 

    cin >> X >> Y >> Z ;
    
    if ( X >= Y && X >= Z )
    {
        if( Y >= Z )
        {
            cout << Z << endl << Y << endl << X << endl 
            << endl << X << endl << Y << endl << Z ; 
        }
        
        else if( Y <= Z )
        {
            cout << Y << endl << Z << endl << X << endl 
            << endl << X << endl << Y << endl << Z ; 
        }
    }

    else if ( Y >= X && Y >= Z )
    {
        if( X >= Z )
        {
            cout << Z << endl << X << endl << Y << endl 
            << endl << X << endl << Y << endl << Z ; 
        }
        
        else if( X <= Z )
        {
            cout << X << endl << Z << endl << Y << endl 
            << endl << X << endl << Y << endl << Z ; 
        }
    }

    else if ( Z >= X && Z >= Y )
    {
        if( X >= Y )
        {
            cout << Y << endl << X << endl << Z << endl 
            << endl << X << endl << Y << endl << Z ; 
        }
        
        else if( X <= Y )
        {
            cout << X << endl << Y << endl << Z << endl 
            << endl << X << endl << Y << endl << Z ; 
        }
    }

    return 0 ; 
}