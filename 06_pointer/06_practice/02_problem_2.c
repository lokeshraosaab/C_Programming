# include<stdio.h>

void printAdd(int a);

int main(){

    int i=4;
    printf("The address of the variable i is %u \n", &i);

    printAdd(i);

    
    return 0;
}

void printAdd(int a){
    printf("The address of the variable a is %u \n", &a);

}

// Different output will shows that it is not compulsory or will not be always true that 4 of main function and 4 (which is passes as variable i) of printAdd function
// will be on the same address.
// As a person and his clone will not be on the same place everytime.
