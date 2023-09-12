// Write a program to calculate the sum of the numbers occuring in the multiplication table of n
# include<stdio.h>

int main(){
    int i=0; int n; int sum=0;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    while(i<10){
        i++;
        sum+=i*n;
    }
    printf("Sum of the multiplication table of %d is %d", n, sum);
    return 0;
}