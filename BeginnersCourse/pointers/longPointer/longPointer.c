// Studying pointers in a long array
#include <stdio.h>
int main(void)
{
    long multiple[] = {15L, 25L, 35L, 45L};
    long * ptr = multiple;

    for (int i = 0; i < sizeof(multiple)/sizeof(multiple[0]); ++i)
    {
        printf("address ptr + %d (&multiple[%d]): %lu   *(ptr + %d)   value: %lu\n",
        i, i, (unsigned long)(ptr + i), i, *(ptr + i));
    }
    
    printf("\n  Type long occupies: %d bytes\n", (int)sizeof(long));
}