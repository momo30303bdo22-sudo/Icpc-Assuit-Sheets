#include <iostream> 
#include <cctype> 

using namespace std ; 

int main ()
{
    char ch ;
     
    cin >> ch ; 

    if (ch == 'z')
    {
        cout << 'a' ; 
    }

    else if ( ch == 'Z')
    {
        cout << "A" ; 
    }

    else if (islower(ch))
    {
        cout << char (int(ch) + 1) ; 
    }
    else if (isupper(ch))
    {
        cout << char (int(ch) + 1) ; 
    }

    return 0 ; 
}