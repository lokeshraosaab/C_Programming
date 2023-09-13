# include<stdio.h>
// sum is a function takes a, b as input returns an integer as an output .
int sum(int a , int b); // --> function prototype declaration 
int main(){
    int result;
   result = sum(2 , 3);    // function call
   printf("The value of result is %d", result);
    return 0;
}
int sum(int a , int b){
    int c;                 // function definition
    c = a + b;
return c;
}
// a, b are parameters or we can say variable placeholders .
// here 2,3 are arguements as they are actual .