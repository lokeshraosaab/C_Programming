# include<stdio.h>

int main(){
    int i=5;
    printf("The value of i is %d \n", i++);
    printf("The value of i is %d \n", i++);
    printf("The value of i is %d \n", i); // here output is 7
    i+=10; //---> it denotes that i=i+10 so it will give 7+10=17 to the next statement fo value of i.
    // some operators are -=, +=, *=, /=, %= called compound assignment operators.
    // all will be use on the basis as += is mentioned above.
    printf("The value of i is %d \n", i);
    // i++ ---> first print then increment
    //++i ---> first increment then print
    // same rule for decrement cases .
    // +++ operator does not exist .
    int a=5;
    printf("The value of a is %d \n", ++a);
    printf("The value of a is %d \n", ++a);
    printf("The value of a is %d \n", a);
    return 0;
}