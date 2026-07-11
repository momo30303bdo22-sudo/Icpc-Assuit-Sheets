/*
Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.
*/

#include <iostream> 
#include <cctype> 

using namespace std ; 

int main () 
{
    char ch ; 

    cin >> ch ; 

    if (int(ch) >= 97 && int(ch) <= 122)
    {
        cout << char(toupper(ch)) ; 
    }
    else if (int(ch) >= 65 && int(ch) <= 90)
    {
        cout << char(tolower(ch)) ; 
    }

    return 0 ; 


}