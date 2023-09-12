// Write a program to calculate the factorial of a given number using a for loop
# include<stdio.h>

int main(){
    int i;
    int n; int factorial=1;
    // factorial(5)= 1*2*3*4*5 = 120
    printf("Enter the value of n \n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        factorial*=i;
    }
    printf("The value of the factorial of %d is %d", n, factorial);
    return 0;
}