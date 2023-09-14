# include<stdio.h>

void printAdd(int*i);

int main(){
    int a;
    printf("The address of the variable a is %u \n", &a);
    printAdd(&a);
    
    return 0;
}

void printAdd(int*i){
    printf("The address of the variable a on passing address of variable to the function is %u \n", i);
    return;
}