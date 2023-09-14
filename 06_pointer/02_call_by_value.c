# include<stdio.h>

int sum(int a, int b);

int main(){
    int x=3, y=4;
    printf("The value of x and y is %d and %d \n", x, y);
    printf("The value of x + y is %d \n", sum(x,y));
    printf("The value of x and y after function call is %d and %d \n", x, y);


    return 0;
}
// if we use a and b as variables in main functions output will be same variables
// of main functions are independent from function prototype and these are only 
// for main functions it means variables of main function and function prototype are not co relative.

// The values 3 and 4 are copied to a and b. Now even if we change the value of
// a and b nothing happens to the variable x and y. This is call by value.

// we can not perform swap program by call by value it can be done by call by reference
// on passing addresses of the variable as arguements .

int sum(int a, int b){
    int c = a+b;
    a=6457;
    b=8790;
        return c;
}