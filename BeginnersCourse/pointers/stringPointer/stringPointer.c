// Pointer and string example
#include <stdio.h>
#include <string.h>
int main(void)
{
    char multiple[] = "a string";
    char * ptr = multiple;

    for (int i = 0; i < strlen(multiple); i++)
    {
        printf("multiple[%d] = %c *(ptr+%d) = %c &multiple[%d] = %p ptr + %d = %p\n",
        i, multiple[i], i, *(ptr+i), i, &multiple[i], i, ptr + i);
    }
    
}