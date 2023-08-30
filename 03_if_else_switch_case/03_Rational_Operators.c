# include<stdio.h>

int main(){
    int age;
    int vipPass;
    // vipPass=1;
    printf("Enter Your age \n");
    scanf("%d", &age);
    // = --> is used for assignment operator , where as == --> is used for equality checks.
    // if(age=50){} ---> it will execute but does not give equality check results.
    // because in C any non zero value is considered to be true . and it will print your true statement.
    // use of >= , || --> OR
    if(age>=90 || age<=18){
        printf("You cannot drive \n");
    }
    else{
        printf("You can drive \n");
    }
    // use of ==
    if(age==50){
        printf("You are half century \n");
    }
    // use of <
    if(age<18){
        printf("you are in childhood \n");
    }
    // use of && --> AND
    if((age>18 && age<40) || vipPass==1){
        printf("You are teenager \n");
    }
    else{
        printf("You are not teenager\n");
    }
    // use of !=
    if(age!=100){
        printf("You are not century \n");
    }
    // use of ! ---> NOT
    if(!(age<=10)){
        printf("You are not child");
    }
    else{
        printf("You are child");
    }

    return 0;
}