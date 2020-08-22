/*
Function that squares a number by itself
*/
#include <stdio.h>
void squareByItself(int * ptr);
int main() {
    int a = 2;

    printf("Value of a before square: %d\n", a);

    squareByItself(&a);

    printf("Value of a after square: %d\n", a);

    return 0;
}

void squareByItself(int * ptr) {

    *ptr = *ptr * *ptr;

}