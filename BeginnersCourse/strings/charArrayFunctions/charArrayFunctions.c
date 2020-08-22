/*
1. Count the number of characters of a string
2. Concatenate two strings
3. Check if two strings are equal
*/
#include <stdio.h>
#include <stdbool.h>

int lenString(char string[]);
void concatenateStrings(char result[], char string1[], char string2[]);
bool compareStrings(const char str1[], const char str2[]);

int main()
{
    char myWord[100];
    char word1[100];
    char word2[100];
    char result[200];
    const char wordA[] = "Mhirley Lopes";
    const char wordB[] = "Mhirley";

    printf("Enter a word: ");
    scanf(" %s", myWord);

    printf("The word: \"%s\" has %d characters\n", myWord, lenString(myWord));

    printf("Enter the first word: ");
    scanf(" %s", word1);

    printf("\nEnter the second word: ");
    scanf(" %s", word2);

    concatenateStrings(result, word1, word2);

    printf("Both words %s equal\n", compareStrings(wordA, wordB) ? "are" : "are not");

    return 0;
}

int lenString(char string[])
{
    int count = 0;

    for (count = 0; string[count] != '\0'; count++);
    
    return count;
}

void concatenateStrings(char result[], char string1[], char string2[])
{
    unsigned int index = 0;
    
    for (size_t i = 0; string1[i] != '\0'; i++)
    {
        result[index] = string1[i];
        index++;
    }
    for (size_t i = 0; string2[i] != '\0'; i++)
    {
        result[index] = string2[i];
        index++;
    }
    result[index] = '\0';

    printf("%s\n", result);

}

bool compareStrings(const char str1[], const char str2[])
{
    unsigned int index = 0;
    bool equal = true;

    while((str1[index] != '\0') || (str2[index] != '\0'))
    {
        if (str1[index] != str2[index])
        {   
            equal = false;
            break;
        }
        index++;
    }

    return equal;
}