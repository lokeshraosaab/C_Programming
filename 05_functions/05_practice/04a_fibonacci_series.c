#include <stdio.h>

int fibo(int a);

int main()
{
    int n;
    printf("Enter the value of n for the no. of terms of series as output:- ");
    scanf("%d", &n);
    printf("The fibonacci series is as follows:- ");
    for (int c = 1; c <= n; c++)
    {
        int f = fibo(c);
        printf("%d, ", f);
    }
    printf("....");

    return 0;
}

int fibo(int a)
{
    if (a == 1 || a == 2)
    {
        return a - 1;
    }
    else
    {
        return (fibo(a - 1) + fibo(a - 2));
    }
}