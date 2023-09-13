# include<stdio.h>
int factorial(int x); // Function Prototype 

int main(){
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("The value of Factorial %d is %d", a, factorial(a));
    return 0;
}

// Function Definition 
int factorial(int x){
    printf("Calling factorial %d \n", x);
    if(x==0 || x==1){
        return 1;
    }
    else {
        return x*factorial(x-1);
    }
}