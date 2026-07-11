/*
Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

Note: consider the whole year has 365 days and 30 days per month.

Input
Only one line containing a number N (0 ≤ N ≤ 106).

Output
Print the output, like the following examples.

*/

#include <iostream> 

using namespace std ; 

int main ()
{
    int num_of_age_by_days ;
    
    cin >> num_of_age_by_days ; 

    int num_by_years = num_of_age_by_days / 365 ;

    cout << num_by_years << " years" << endl ; 

    int num_of_months =  num_of_age_by_days - (num_by_years * 365) ; 
    int num_by_months = num_of_months / 30 ; 
    
    cout << num_by_months << " months" << endl ; 

    int num_of_days = num_of_months - (num_by_months * 30) ; 
    
    cout << num_of_days << " days" << endl ; 

    return 0 ; 





}