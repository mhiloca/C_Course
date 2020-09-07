// Employee struct challenge
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 50
struct date {
    int day, month, year;
};
struct employee {
    char * name;
    struct date hireDate;
    float salary;
};

int main() {

    struct employee employes[2];
    char temp[SLEN];

    for (size_t i = 0; i < 2; i++) {

        printf("- - - - - - - - - - - - - \n");
        
        printf("Enter employee name: ");
        scanf(" %[^\n]*c", temp);

        employes[i].name = (char *) malloc(strlen(temp) + 1);
        strcpy(employes[i].name, temp);

        printf("Hiring date: ");
        scanf(" %i %i %i", &employes[i].hireDate.day, &employes[i].hireDate.month, &employes[i].hireDate.year);

        printf("Employee salary: ");
        scanf(" %f", &employes[i].salary);

    }

    printf("\n\nName\tHire date\tSalary\n");

    for (size_t j = 0; j < 2; j++) {

        printf(
            "%s\t%i/%i/%i\t%.2f\n",
            employes[j].name,
            employes[j].hireDate.day,
            employes[j].hireDate.month,
            employes[j].hireDate.year,
            employes[j].salary
        );

        free(employes[j].name);

    }
    return 0;
 
}