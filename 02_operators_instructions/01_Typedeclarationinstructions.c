# include<stdio.h>

int main(){
     int a = 4, b, c; // Type declaration instructions ;
     b = c = a;
     printf("The value of a is %d \n", a);
     printf("The value of b is %d \n", b);
     printf("The value of c is %d \n", c);
    //  float p = q + 1.1; float q = 8.9; ERROR ! AS WE ARE TRYING TO USE A BEFORE DEFINING IT .
    float q=1.1; float p=q+8.9; // Yes, it is acceptable .
    printf("The value of p is %f\n",p);
    
    return 0;
}