#include <stdio.h>
int fibonacciseries(int a);
// series by adding two previous numbers.

int main()
{
    int f, n;
    printf("Enter the value of n for the nth term of the series ");
    scanf("%d", &n);
    f = fibonacciseries(n);
    printf("The value of %dth term of the fibonacci series is %d", n, f);
    return 0;
}

int fibonacciseries(int a)
{
    if (a == 1 || a == 2)
    {
        return a - 1;
    }
    else
    {
        return (fibonacciseries(a - 1) + fibonacciseries(a - 2));
    }
}