/*
Author: Mhirley Lopes
Purpose: Initializa arrays example
Date: 08.07.2020
*/
#include <stdio.h>
#define MONTHS 12       // Define constant MONTHS
int main()
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int index = 0; index < MONTHS; index++)
    {
        printf("Month %d has %2d days.\n", index + 1, days[index]);
    }

    return 0;
}