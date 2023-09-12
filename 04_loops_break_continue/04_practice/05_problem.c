// Write a program to print sum of first n natural numbers using for loop.
# include<stdio.h>

int main(){
    int i;
    int sum=0;
    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("The value of sum of first %d natural numbers is %d \n",n,sum);
    return 0;
}