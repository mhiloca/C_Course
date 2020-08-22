/*
1. Reverse a string using strlen()
2. Sort the strings of an arrya using a bubble-sort
*/
#include <stdio.h>
#include <string.h>

void reverseString(char word[]);
void arraySort(char listStrings[5][20]);
void arraySort2(char strings[5][20]);

int main()
{
    char str1[] = "Mhiloca";
    char list[5][20] = {"zero", "three", "five", "one", "eight"};

    reverseString(str1);
    // arraySort(list);
    arraySort2(list);

    return 0;
}

void reverseString(char word[])
{
    int i, l;
    l = strlen(word);

    for (i = l; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
    printf("\n");
}

void arraySort(char listStrings[5][20])
{
    int listLength = 5;
    char greater[20];
    char lesser[20];

    for (size_t i = 0; i < listLength; i++)
    {
        for (size_t x = 0, y = 1; y < listLength; x++, y = x + 1)
        {
            strcpy(greater, (listStrings[x][0] > listStrings[y][0] ? listStrings[x] : listStrings[y]));
            strcpy(lesser, (listStrings[x][0] < listStrings[y][0] ? listStrings[x] : listStrings[y]));
            strcpy(listStrings[x], lesser);
            strcpy(listStrings[y], greater);
        }
        
    }

    for (size_t i = 0; i < listLength; i++)
        {
            printf("%s ", listStrings[i]);
        }
        printf("\n");
    
}

void arraySort2(char strings[5][20])
{
    int n = 5;
    char temp[20];

    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 0; j < n - i; j++)
        {
            if (strings[j][0] > strings[j+1][0])
            {
                strcpy(temp, strings[j+1]);
                strcpy(strings[j+1], strings[j]);
                strcpy(strings[j], temp);
            } 
        } 
    }
    for (size_t i = 0; i < n; i++)
        {
            printf("%s ", strings[i]);
        }
    printf("\n");
}