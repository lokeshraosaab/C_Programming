# include<stdio.h>

int main(){
    int age;
    printf("Enter Your age \n");
    scanf("%d", &age);
    if(age>18){
        printf("You can drive \n");
    }
    else{
        printf("You can't drive \n");
    }
    return 0;
}