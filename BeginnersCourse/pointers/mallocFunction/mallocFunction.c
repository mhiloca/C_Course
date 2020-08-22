/* 
Allocate memory dynamically
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char * str = NULL;

    // Initial memory allocation
    str = (char *) malloc(15 * sizeof(char));
    strcpy(str, "jason");
    printf("String = %s, address= %p\n", str, str);

    // Reallocating memory
    str = (char *) realloc(str, 25);
    strcat(str, ".com");
    printf("String = %s, address = %p\n", str, str);

    free(str);

    return 0;
}