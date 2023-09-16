#include <stdio.h>

// *** ALWAYS KEEP IN MIND MEMORY ALLOCATION BY A INTEGER, FLOAT, AND CHARACTER
// CAN BE DIFFRENT BY ACHITECTURE BY ARCHITECTURE .IT DEPENDS ON ARCHITECTURE DESIGN.

int main()
{
    int i = 30;
    int *ptr = &i;
    printf("The value of ptr is %u \n", ptr);
    printf("The value of *ptr i.e. value at &i is %d \n", *ptr);

    ptr++; // ---> i.e. ptr++ = ptr + 1; that means points the pointer to the next box from the address i (&i) and every integer
    // is of 4 bytes that means add 4 bytes on value of ptr i.e. &i on ptr++
    // ptr + 2 that means add 8 bytes to the value of ptr i.e. &i
    printf("The value of ptr after increment is %u \n", ptr);
    printf("The value of *ptr i.e. value at 'address after increment' is %d \n", *ptr);
    printf("The value of ptr is %u \n", ++ptr);
    printf("The value at this address i.e. *ptr is %d \n", *ptr);

    // using increments we can only assume addresses not value at those addresses.
    // These all rules, patterns will also be applied for char and float type pointers.
    // Every integer and floats allocates memory of 4 bytes , and every character allocates
    // of 1 byte . 

    char c ='u';
    char *p_t_r = &c;
    printf("The value of p_t_r is %u \n", p_t_r);
    printf("The value of *p_t_r i.e. value at &c is %c \n", *p_t_r);
    p_t_r++;
    printf("The value of p_t_r after increment is %u \n", p_t_r);
    printf("The current value of *p_t_r i.e. at p_t_r after inctrement is %c \n", *p_t_r);


    float a = 4.5;
    float *p__t_r = &a;
    printf("The value of p__t_r is %u \n", p__t_r);
    printf("The value of *p__t_r i.e. value at &a is %f \n", *p__t_r);
    p__t_r++;
    printf("The value of p__t_r after increment is %u \n", p__t_r);
    printf("The current value of *p__t_r i.e. value at p__t_r after inctrement is %f \n", *p__t_r);


    // values at adresses those are not given by us to the program are garbage values at those addresses
    return 0;
}