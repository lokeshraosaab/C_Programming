//Write a program to print multiplications table of 10 in reversed order.
# include<stdio.h>

int main(){
    
    for(int i=10;i;i--){
    printf("10*%d = %d \n", i, i*10);
    }
    return 0;
}