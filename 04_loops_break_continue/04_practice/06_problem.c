// Write a program to sum of first n natural numbers using do while loop .
# include<stdio.h>

int main(){
    int i=0; int sum=0; int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    do{
        i++;
        sum+=i;
    }while(i<n);
    printf("Sum of first %d natural numbers is %d", n, sum);

    return 0;
}