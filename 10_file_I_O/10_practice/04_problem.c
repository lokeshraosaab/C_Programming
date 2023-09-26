#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[20];
    int salary;
} emp;

int main()
{
    FILE *ptr;
    ptr = fopen("04_problem.txt", "w");
    emp e1, e2;
    printf("Enter name of your employee e1 :- ");
    gets(e1.name);
    printf("Enter salary of your employee e1 :- ");
    scanf("%d", &e1.salary);
    fflush(stdin);
    printf("Enter name of your employee e2 :- ");
    gets(e2.name);
    fflush(stdin);
    printf("Enter salary of your employee e2 :- ");
    scanf("%d", &e2.salary);
    // strcpy(e1.name, "Harry");
    // e1.salary = 330000;
    // strcpy(e2.name, "Lokesh");
    // e2.salary = 230000;
    fprintf(ptr, "%s, %d\n", e1.name, e1.salary);
    fprintf(ptr, "%s, %d\n", e2.name, e2.salary);
    fclose(ptr);
    printf("Your file has written successfully to 04_problem.txt");

    return 0;
}