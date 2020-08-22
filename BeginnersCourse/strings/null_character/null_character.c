/*
Null character example
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = {"Hello world! I am enjoying learning C!"};
    char string2[50];
    int count = 0;

    printf("\n%s\n", string1);
    printf("%s\n\n", string2);

    printf("The length of the second string is: %lu\n", sizeof(string2));

    printf("The length of the first string is: %lu\n", strlen(string1));

    printf("\n%s\n", string1);
    strncpy(string2, string1, sizeof(string2) - 1);
    printf("\n%s\n", string2);

    return 0;
}