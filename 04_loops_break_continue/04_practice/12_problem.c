// Implement problem 10 using do while loop.
#include <stdio.h>

int main()
{
    int i = 2;
    int n;
    int prime = 1;
    printf("Enter the number \n");
    scanf("%d", &n);
    do
    { 
       /* if(n=2){
            prime=1;
            break;
        } */
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i < n);
    if(prime==0 && n!=2){
        printf("The number %d is not a prime number", n);
    }
    else{
        printf("The number %d is a prime number", n);
    }
    return 0;
}