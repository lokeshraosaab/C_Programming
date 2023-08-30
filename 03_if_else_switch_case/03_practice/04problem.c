# include<stdio.h>

int main(){
    // Write a program to find whether a year entered by the user is a leap year or not.
    int year;
    printf("Enter a year \n");
    scanf("%d", &year);
    if(year%4==0 && year%100!=0){
        printf("Your entered year is a leap year \n");
    }
    else if(year%400==0){
        printf("Your entered year is a leap year \n");
    }
    else{
        printf("Your entered year is not a leap year \n");
    }
    return 0;
}