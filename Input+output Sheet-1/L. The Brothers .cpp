/*
Given two person names.

Each person has {"the first name" + "the second name"}

Determine whether they are brothers or not.

Note: The two persons are brothers if they share the same second name.

Input
First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.

Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

Output
Print "ARE Brothers" if they are brothers otherwise print "NOT".
*/

#include <iostream> 

using namespace std ; 

int main () 
{
    string name1 , name2 , name3 , name4 ; 

    cin >> name1 >> name2 >> name3 >> name4 ; 

    if (name2 == name4) // The String Usage in a Comprsion
    {
        cout << "ARE Brothers" ; 
    }

    else 
    {
        cout << "NOT" ; 
    }

    return 0 ; 
}