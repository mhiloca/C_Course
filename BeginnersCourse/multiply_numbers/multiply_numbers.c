/*
Author: Mhirley Lopes
Purpose: Study functions and parameters
Date: 12.07.2020
*/
#include <stdio.h>
// void multiply_numbers(int x, int y)
int multiply_numbers(int x, int y)
{
    int result = x * y;
    // printf("The product of %d multiplied by %d is: %d\n", x, y, result);
    return result;
}

int main (void)
{
    int a = multiply_numbers(10, 20);
    int b = multiply_numbers(20, 30);
    int c = multiply_numbers(50, 2);

    printf("The multiplied results are: %d, %d, an %d\n", a, b, c);

    return 0;
}