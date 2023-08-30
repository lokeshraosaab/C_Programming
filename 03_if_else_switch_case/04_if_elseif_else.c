# include<stdio.h>

int main(){
    int num;
    printf("Enter your number\n");
    scanf("%d", &num);
    if(num==1){
        printf("Your number is 1 \n");
    }
    else if(num==2){
        printf("Your number is 2 \n");
    }
    else if(num==3){
        printf("Your number is 3 \n");
    }
    else{
        printf("Its not 1, 2 or 3\n");
    }
    // Operator Precedence --->
    // 1st !
    // 2nd *, /, %
    // 3rd +, -
    // 4th <, >, <=, >=
    // 5th ==, !=
    // 6th &&
    // 7th ||
    // 8th = ;

    return 0;
}