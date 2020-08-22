/*
Author: Mhirley Lopes
Purpose: Study for loop with more than one control variable
Date: 03.07.2020
*/
#include <stdio.h>
int main()
{
    for(int i=1, j=2; i<=5; ++i, j+=2)
        printf(" %5d", i*j);
}