// Write a program to check whether a number is prime number or not .
// This is not the best method to solve this problem .
#include <stdio.h>

int main()
{
    int i;
    int n;
    int prime = 1;
    printf("Enter the number \n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("The number %d is not a prime number", n);
    }
    else
    {
        printf("The number %d is a prime number", n);
    }
    return 0;
}