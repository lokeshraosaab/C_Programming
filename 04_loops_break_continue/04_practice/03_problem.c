// Write a program to sum first ten natural numbers using while loop .
#include <stdio.h>

int main()
{
    int i = 0, sum = 0;
    int n;
    printf("Enter the value of n \n");
   scanf("%d", &n);
    while (i < n)
    {
        i++;
        sum += i;
    }
    printf("Sum of first %d natural numbers is %d", n, sum);

    return 0;
}