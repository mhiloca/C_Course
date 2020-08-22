/*
Author: Mhirley Lopes
Purpose: Studyin scanf()
Date: 19.06.2020
*/
#include <stdio.h>
int main()
{
    char str[100];
    int i;

    printf("Enter a value: ");
    scanf("%s %d", str, &i);

    printf("\nYou entered: %s %d\n", str, i);

    return 0;
}