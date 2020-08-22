/*
Common functions 2: strchr(), strstr(), strtok() 
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void searchChar();
void searchStr();
void tokenize();
void analyzeStr();
void isFirstCharUpper();
void upperCase();

int main()
{
    searchChar();
    searchStr();
    tokenize();
    analyzeStr();
    isFirstCharUpper();
    upperCase();

    return 0;
}

void searchChar()
{
    char string[] = "The quick brown fox";
    char ch = 'f';
    char *pGotCh = NULL;
    
    pGotCh = strchr(string, ch);

    printf("%s\n", pGotCh);
}

void searchStr()
{
    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;

    pFound = strstr(text, word);

    printf("This is the word found: %s\n", pFound);
}

void tokenize()
{
    char str[] = "Hello, how are you? - My names is - Mhirley";
    const char s[2] = "-";
    char *token;

    // get the first token
    token = strtok(str, s);

    // go through other tokens
    while (token != NULL)
    {
        printf("%s\n", token);

        token = strtok(NULL, s);
        printf("%s\n", token);
    }
}

void analyzeStr()
{
    char buf[100];
    int nLetters = 0, nDigits = 0, nPuncts = 0;

    printf("Enter an interesting string of less the %lu characters: ", sizeof(buf) - 1);
    scanf("%s", buf);

    int i = 0;

    while (buf[i])
    {
        if(isalpha(buf[i]))
            ++nLetters;
        else if(isdigit(buf[i]))
            ++nDigits;
        else if(ispunct(buf[i]))
            ++nPuncts;

        ++i;
    }

    printf("In your string:\n%s\nThere are %d letters, %d digits and %d punctuation characters\n", buf, nLetters, nDigits, nPuncts);

}

void isFirstCharUpper()
{
    char string[] = "My name is Mhirley";

    printf("%d\n", isupper(string[0]));
}

void upperCase()
{
    char buf[] = "my name is mhirley";

    for (size_t i = 0; buf[i] != '\0'; i++)
    {
        printf("%c", (char) toupper(buf[i]));
    }

    printf("\n");
    
}