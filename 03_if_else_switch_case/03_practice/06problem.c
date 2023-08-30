# include<stdio.h>

int main(){
    // Write a program to find greatest of four numbers entered by the user.
    int num1, num2, num3, num4;
    printf("Enter the four numbers to be compare\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    if(num1>num2 && num1>num3 && num1>num4){
        printf("%d is the largest no.",num1);
    }
    else if(num2>num1 && num2>num3 && num3>num4){
        printf("%d is the largest no.", num2);
    }
    else if(num3>num1 && num3>num2 && num3>num4){
        printf("%d is the largest no.", num3);
    }
    else {
        printf("%d is the largest no", num4);
    }
    return 0;
}