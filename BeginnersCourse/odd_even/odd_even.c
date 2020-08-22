/*
Author: Mhirley Lopes
Purpose: Study if-else statements
Date: 27.06.2020
*/
#include <stdio.h>
int main()
{
    int number_to_test;

    _Bool even;

    printf("Enter the number to be tested: ");
    scanf("%d", &number_to_test);

    if (number_to_test % 2)
        printf("The number %d is odd\n", number_to_test);   
    else
        printf("The number %d is even\n", number_to_test);
    
    even = number_to_test % 2 ? 0 : 1; // ternary operator

    printf("The number is %u\n", even);

    return 0;
}