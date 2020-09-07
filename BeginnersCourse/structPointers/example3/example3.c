// Character pointers and dynamically allocate memory
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 50
struct pnames {
        char * fname;
        char * lname;
    };
void getinfo(struct pnames * pst);
int main() {

    struct pnames fullName;
    getinfo(&fullName);

    return 0;
}

void getinfo(struct pnames * pst) {

    char temp[SLEN];

    printf("Please enter your first name: ");
    scanf("%s", temp);

    pst->fname = (char *) malloc(strlen(temp) + 1);
    strcpy(pst->fname, temp);

    printf("Please enter your last name: ");
    scanf("%s", temp);

    pst->lname = (char *) malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);

    printf("You complete name is: %s %s\n", pst->fname, pst->lname);
    printf("%lu\t%lu\n", strlen(pst->fname), strlen(pst->lname));

    free (pst->fname);
    free (pst->lname);

}