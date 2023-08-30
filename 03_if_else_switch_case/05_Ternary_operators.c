# include<stdio.h>

int main(){

    int a;
    printf("Enter a value of a \n");
    scanf("%d", &a);
    (a<5)? printf("a is less than 5") : printf("a is not less than 5"); // i.e. Short hand "if else" 
    // using conditional or ternary operators .
    // ? , : are the ternary operators
    return 0;
}