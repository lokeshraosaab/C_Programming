//Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0.
# include<stdio.h>

int main(){
    int i=0;
    printf("All the natural numbers 10-20 \n");
    // scanf("%d", &i);
    while(i<=20){
        if(i>=10){
        printf("%d \n", i);
        }
        i++;
    }
    return 0;
}