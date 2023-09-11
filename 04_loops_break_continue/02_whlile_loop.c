# include<stdio.h>

int main(){
    int a;
    printf("print all natural numbers less than 10 starting from ");
    scanf("%d", &a);
    // a=11
    // while (a>10){ --->these two lines will leads to be an infinite loop .
     while (a<10){
        printf("%d \n", a);
        a++;
    }
    return 0;
}