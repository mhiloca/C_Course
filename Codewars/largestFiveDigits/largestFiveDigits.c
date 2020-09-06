/*
Return the greatest sequence of five consecutive digits found
within the number given
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void largestFiveDigits(const char digits[]);
char * largestNumber(char * num1, char * num2);
int main() {
    const char bigNumber[] = "0987654321";

    // printf("%d\n", largestFiveDigits(bigNumber));

    largestFiveDigits(bigNumber);

    return 0;
}

void largestFiveDigits(const char digits[]) {
    const char * ptr = digits;
    char * largest;

    while (*(ptr + 5) != '\0') {
        largest = largestNumber(ptr, (ptr + 1));
        ptr++;
    }

    for (; largest < largest + 4; largest++){
        printf("%c", *largest);
    }

    printf("\n");

}

char * largestNumber(char * num1, char * num2) {

    return *num1 > *num2 ? num1 : num2;
}
