# include<stdio.h>

int main(){
    int i = 65, j=67;
    int *a=&i; int *b=&j; //---> here a and b are pointers 
    // addition & subtraction of pointer & numbers performs on basis of --> integer reserved memory in bytes & pointer stores addresses
    // in memory a integer reserves 4 bytes so additon or subtraction of pointers  give results 
    // on the basis of 4*integervalue because pointers stores addresses
    printf("The value of a is %u \n", a);
    printf("The value of a+3 is %u \n", a+3);
    printf("The value of a-3 is %u \n", a-3);
    printf("The value of b is %u \n", b);
    printf("The value of b+3 is %u \n", b+3);
    printf("The value of b-3 is %u \n", b-3);
    // subtraction of pointer and pointer gives output us difference of both address divided by 4 --> diff/4.
    // if difference of addresses is 12 then diff of pointers will be of 12/4 = 3.
   //  printf("The value of a+b is %u \n", a+b); //--->we can't perform addition b/w pointer and pointer
    printf("The value of a-b is %u \n", a-b);
    int *c=&i;
    if(a==c){
        printf("Yes we can compare pointers i.e. equality");
    }


    return 0;
}