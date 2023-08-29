# include<stdio.h>

int main(){
 int x=2;
 int y=3;
 printf("The value of 3*x-4*y is %d\n", 3*x-4*y); // i.e. absence of parenthesis.
 printf("The value of 3*(x-4*y) is %d\n", 3*(x-4*y));//  i.e. presence of parenthesis.
 printf("The value of 8*y/3*x is %d\n", 8*y/3*x); // will give wrong answer & also use only %d bcz x,y,8,3 all are integers otherwise answer will be zero.
 // bcz *, / follows left to right associativity .
 // 8*3/3*2 is not equal to 24/6
 // 24/3*2
 // 8*2=16
 float a=2.0;
 float b=3.0;
 printf("The value of 3*a/8*b is %f\n", 3*a/8*b); // answer will be according to the left to right associativity. use only %f bcz a,b are given as float otherwise answer will be zero.
 // priority 1st ---> *,/,%
 // 2nd----> +,-
 // 3rd ---> =
 // operaters of higher priority are evaluated first in the absence of parenthesis.



    return 0;
}