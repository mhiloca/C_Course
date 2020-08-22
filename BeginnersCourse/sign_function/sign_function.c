/*
Author: Mhirley Lopes
Purpose: Study else if statements
Date: 27.06.2020
*/
#include <stdio.h>
int main()
{
    int number, sign;
    
    printf("Please type in a number: ");
    scanf("%d", &number);

    if (number > 0)
        sign = 1;
    else if (number == 0)
        sign = 0;
    else
        sign = -1;
    
    printf("The sign is: %d\n", sign);

    return 0;
}