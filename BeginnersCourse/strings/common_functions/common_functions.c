/*
Common string functions
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenate();
void compare();
void comparen();


int main()
{
    // concatenate();
    // compare();
    comparen();

    return 0;
}

void concatenate()
{
    char myString[] = " my string";
    char input[100];
    char src[50], dest[50];

    printf("Enter a string to be concatenated: ");
    scanf("%s", input);

    printf("\nThe string %s concatenated with %s is:::: ", myString, input);
    printf("%s\n", strcat(input, myString));

    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    strncat(dest, src, 5);

    printf("Final destination string: |%s|\n", dest);
}

void compare()
{
    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));

    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));

    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C", "A"));

    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n", strcmp("Z", "a"));

    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples", "apple"));
}

void comparen()
{
    if (strncmp("astronomy", "astro", 5) == 0)
    {
        printf("Found astronomy\n");
    }

    if (strncmp("astouning", "astro", 5) == 0)
    {
        printf("Found astouning\n ");
    }
}