# include<stdio.h>

int main(){
    int i=50;
    int *j; //--->declare a variable j of type int pointer.
    j=&i;  // ---> store address of i in j ;
    // int *j=&i; this single statement represents above two lines.


    printf("The address of the variable i is %u\n", &i);
    printf("The address of the variable i is %u\n", j);
    printf("The address of the variable j is %u\n", &j);
    printf("The value of the variable i is %d\n", i);
    printf("The value of the variable i is %d\n", *(&i));
    printf("The value of the variable i is %d\n", *j);
    printf("The value of the variable j is %d\n", *(&j));
    printf("The value of the variable j is %u\n", j); 
    printf("The value of the variable j is %d\n", j);
    printf("The value of the variable j is %u\n", &i);
    printf("The value of the variable j is %d\n", &i);

// if there is already declare that your variable pointer is of int type then you can 
// also use %d instead of %u for printing the stored address of variable output will be same in both conditions
// bt %u will be more correct for printing the address .



    return 0;
}