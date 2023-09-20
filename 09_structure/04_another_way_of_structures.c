#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1 = {100, 2000000.555, "Lokesh"};
    // order of data types in curley braces should be as in struct employee.
    printf("Code is:-  %d\n", e1.code);
    printf("Salary is:-  %f\n", e1.salary);
    printf("Name is:-  %s\n", e1.name);

struct employee e2 = {0};
    printf("Code is:-  %d\n", e2.code);
    printf("Salary is:-  %f\n", e2.salary);
    printf("Name is:-  %s\n", e2.name);

    // Structures are stored in contiguous memory .

    printf("Address of e1.code is %u \n", &e1.code);
    printf("Address of e1.salary is %u \n", &e1.salary);
    printf("Address of e1.name is %u \n", &e1.name);
    printf("Address of e2.code is %u \n", &e2.code);
    printf("Address of e2.salary is %u \n", &e2.salary);
    printf("Address of e2.name is %u \n", &e2.name);


    return 0;
}