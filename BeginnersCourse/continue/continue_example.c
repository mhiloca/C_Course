/*
Author: Mhirley Lopes
Purpose: study continue statement
Date: 03.07.2020
*/
#include <stdio.h>
int main()
{
    enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    for (enum Day day = Monday; day <= Sunday; ++day)
    {
        if(day == Wednesday)
            continue;
        
        printf("It's not Wednesday!\n");
    }

    return 0;
}