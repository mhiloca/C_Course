/* 
Build a count string funciotn using
Pointer arithmetics
*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int countString(const char * word);
int main(void)
{
    const char string[] = "Gustavo José dos Santos";

    printf("There are %d characters in the word \"%s\"\n",
    countString(string), string);
    return 0;
}

int countString(const char * word)
{
    const char * ptr = word;

    while (*ptr)
        ptr++;

    return ptr - word;
}