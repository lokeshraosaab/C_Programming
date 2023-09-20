#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee e)
{
    printf("%d\n", e.code);
    printf("%f\n", e.salary);
    printf("%s\n", e.name);
    e.code = 500; // it will no change in previous e.code because variable e is pass as value not as arguement.
}

int main()
{
    struct employee e1 = {100, 299797.5727, "Lokesh"};
    printf("The value of e1.code before fuction show is %d\n", e1.code);
    show(e1);
    printf("The value of e1.code after fuction show is %d\n", e1.code);
// here we see that no change in e1.code before and after show fuction so e1 is pass as value not as arguements.
    return 0;
}