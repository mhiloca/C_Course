/*
Return the greatest sequence of five consecutive digits found
within the number given
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void largestFiveDigits(const char *digits);

int main()
{
    const char bigNumber[] = "1234567890";

    // printf("%d\n", largestFiveDigits(bigNumber));

    largestFiveDigits(bigNumber);

    return 0;
}

void largestFiveDigits(const char *digits)
{
    const char *ptr = digits;

    while (*(ptr + 4))
    {
        char string[6];
        const char *p = ptr;
        int i;
        for (i = 0; i < 6; ++i, ++p)
        {
            string[i] = *p;
        }
        string[i] = '\0';
        
        printf("%c", *p);

        ptr++;
    }
}
