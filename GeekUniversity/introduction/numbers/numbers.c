#include <stdio.h>
int main(){

    int num;
    double fnum;
    int num1, num2, num3;
    double fnum1;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("This is your number: %d\n", num);

    printf("Enter a floating point number: ");
    scanf("%lf", &fnum);
    printf("This is your number: %lf\n", fnum);

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The total sum is: %d\n", (num1+num2+num3));

    printf("Enter another floating number: ");
    scanf("%lf", &fnum1);
    printf("This is the fith of the number: %.2lf\n", (fnum1/5));

    return 0;
}