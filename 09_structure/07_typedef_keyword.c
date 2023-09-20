#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emp;
// after using typedef like this we can replace struct employee with its alias name emp
// given by typedef . now just like int , float, char -->here emp is our data type .

void show(emp e)
{
    printf("%d\n", e.code);
    printf("%f\n", e.salary);
    printf("%s\n", e.name);
    e.code = 500; // it will no change in previous e.code because variable e is pass as value not as arguement.
}

int main()
{
    emp e1 = {100, 299797.5727, "Lokesh"};
    printf("The value of e1.code before fuction show is %d\n", e1.code);
    show(e1);
    printf("The value of e1.code after fuction show is %d\n", e1.code);
// here we see that no change in e1.code before and after show fuction so e1 is pass as value not as arguements.
    return 0;
}