/*
Author: Mhirley Lopes
Purpose: Study switch case statements
Date: 27.06.2020
*/
#include <stdio.h>
int main()
{
    enum weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum weekday today = Monday;

    switch (today)
    {
    case Sunday:
        printf("Today is Sunday\n");
        break;
    
    case Monday:
        printf("Today is Monday\n");
        break;
    
    case Tuesday:
        printf("Today is Tuesday\n");
        break;
    
    case Wednesday:
        printf("Today is Wednesday\n");
        break;
    
    case Thursday:
        printf("Today is Thursday\n");
        break;
    
    case Friday:
        printf("Today is Friday\n");
        break;
    
    case Saturday:
        printf("Today is Saturday\n");
        break;
    
    default:
        printf("Today is noday");
        break;
    }

    return 0;
}