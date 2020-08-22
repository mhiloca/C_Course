/*
Author: Mhirley Lopes
Purpose: Print the byte size of the basic data types
Date: 27.06.2020
*/
#include <stdio.h>
int main()
{
    printf("The size of an int is: %lu\n", sizeof(int));
    printf("The size of a char is: %lu\n", sizeof(char));
    printf("The size of an long is: %lu\n", sizeof(long));
    printf("The size of an long long is: %lu\n", sizeof(long long));
    printf("The size of an double is: %lu\n", sizeof(double));
    printf("The size of an long double is: %lu\n", sizeof(long double));
}