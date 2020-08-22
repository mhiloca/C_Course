/*
Studying arithmetics operations in pointers 
*/
#include <stdio.h>
#include <stddef.h>
int main()
{
    long num1 = 0L;
    long num2 = 0L;
    long * pnum = NULL;

    pnum = &num1;       // Get address of num1
    *pnum = 2L;         // Set indirectly num1 to 2
    ++num2;             // Increment num2
    num2 += *pnum;      // Add num2 to num1 (indirectly)
    
    pnum = &num2;       // Get address of num2
    ++*pnum;            // Increment num2 indirectly

    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n", num1, num2, *pnum, *pnum + num2);

    return 0;
}