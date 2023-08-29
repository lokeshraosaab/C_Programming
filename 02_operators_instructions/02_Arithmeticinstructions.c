#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;
    int z;
    z = a * b; // This is legal .
    // a * b = z; This is illegal .
    printf("The value of a + b is %d \n", a + b);
    printf("The value of a - b is %d \n", a - b);
    printf("The value of a * b is %d \n", a * b);
    printf("The value of z is %d \n", z);

    float p = 4;
    float q = 8;
    printf("The value of p / q is %f \n", p / q);
    // %---> modular division operator , it returns the remainder; sign is same as of numerater
    printf("When 5 is divided by 2 it leaves a remainder of %d\n", 5 % 2);
    printf("When -5 is divided by 2 it leaves a remainder of %d\n", -5 % 2);
    printf("When 5 is divided by -2 it leaves a remainder of %d\n", 5 % -2);
    printf("When -5 is divided by -2 it leaves a remainder of %d\n", 5 % 2);
    // An arithmetic operation b/w int & int --->int;
    // b/w int & float ---> float;
    // b/w float & float ---> float;
    printf("The value of 5/2 is %d\n", 5/2);
    printf("the value of 5.0/2 is %f\n",5.0/2);
    printf("The value of 5.0/2.0 is %f\n",5.0/2.0);
    // No operator is assumed to be present.
    // For 4*5 ---> (4)(5),4.5 this is illegal .only 4*5,(4)*(5) is acceptable 
    // There is no operator to perform exponentiaton in C
    printf("the value of 4^5 is %d\n", 4^5); //----> will not produce 4 to the power 5. bcz it is bitwise XOR operator.
    printf("the value of 4 to the power 5 is %f\n", pow(4,5));// ---> use %f bcz it returns double.


    return 0;
}