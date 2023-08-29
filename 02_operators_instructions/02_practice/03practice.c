# include<stdio.h>

int main(){
    // Q Write a program to check whether a number is devisible by 97 or not.
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Devisibility test returns : %d\n", num%97);// %-->returns the remainder, if remainder is 0 then the no. is divisible by 97.

    return 0;

}