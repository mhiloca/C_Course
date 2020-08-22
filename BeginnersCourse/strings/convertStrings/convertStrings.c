/*
Convert strings
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void insensitiveCase();
void strToNumbers();
void stringToDouble();

int main()
{
    // insensitvieCase();
    // strToNumbers();
    stringToDouble();

}

void insensitvieCase()
{
    char text[100];
    char substring[50];

    printf("\nEnter the string to be searched (less than %lu characters):\n", sizeof(text) - 1);
    scanf("%s", text);

    printf("\nEnter the string sought (less than %lu characters):\n", sizeof(substring) - 1);
    scanf("%s", substring);

    printf("\nThe string to be searched is: | %s |\n", text);
    printf("The string sought is: | %s |\n", substring);

    //Convert both strings to uppercase
    for (size_t i = 0; (text[i] = (char) toupper(text[i])) != '\0'; i++);
    for (size_t i = 0; (substring[i] = (char) toupper(substring[i])) != '\0'; i++);

    printf("The second string %s found in the first.\n", ((strstr(text, substring) == NULL) ? "was not" : "was"));

}

void strToNumbers()
{
    char number1[] = "100";
    char number2[] = "34.50";
    char number3[] = "98376592364816439";

    double value2 = atof(number2);
    int value1 = atoi(number1);
    long value3 = atol(number3);

    printf("%s if added %d = %d\n", number1, 1, value1 + 1);
    printf("%s if added %f = %f\n", number2, 0.3, value2 + 0.3);
    printf("%s if added %lu = %lu\n", number3, 29374234678, value3 + 29374234678);

}

void stringToDouble()
{
    double value = 0;
    char str[] = "3.5 2.5 1.26"; // The string to be converted
    char *pstr = str;            // Pointer to the string to be converted
    char *ptr = NULL;            // Pointer to character position after conversion

    while(&free)
    {
        value = strtod(pstr, &ptr); // Convert starting at pstr
        
        if(pstr == ptr)            // pstr stored if no conversion
        {
            break;                 // so we are done..
        }
        else
        {
            printf(" %f", value); // Output the resultant value
            pstr = ptr;           // Store start for next conversion
        }
    }
    printf("\n");
}