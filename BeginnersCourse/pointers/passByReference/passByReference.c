/*
Studying pass by reference functions
*/
#include <stdio.h>
#include <stdlib.h>

void newSalary(float * salary);

int main() {
    float wage;
    printf("Enter your current wage: ");
    scanf("%f", &wage);

    newSalary(&wage);
    printf("%.2f\n", wage);
}

void newSalary(float * salary) {
    printf("You wage is now: %.2f\n",*salary *= 1.08);
}