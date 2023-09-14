#include <stdio.h>

void changeValue(int *a);

int main()
{
    int a = 5;
    printf("The value of a is %d \n", *(&a));
    changeValue(&a);
    printf("The value of a after funtion call is %d \n", *(&a));
    return 0;
}

void changeValue(int *a)
{
    int temp = 10 * (*a);
    *a = temp;
    return;
}
