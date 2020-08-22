/*
Author: Mhirley Lopes
Purpose: Study bitwise operators
Date: 25.06.2020
*/

#include <stdio.h>
int main()
{
    unsigned int a = 60; // 0000 0000 0000 0000 0000 0000 0011 1100 
    unsigned int b = 13; // 0000 1101
    int result = 0;

    result = a >> 4; // 0000 0000 0000 0000 0000 0000 0000 0011

    printf("the result is %d\n", result);

    return 0;
}