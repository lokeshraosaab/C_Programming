// Repeat problem 8 using while loop .
# include<stdio.h>

int main(){
    int i=0;
    int n;
    int factorial=1;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    while(i<n){
        i++;
        factorial*=i;
    }
    printf("The value of the factorial of %d is %d", n, factorial);
    return 0;
}