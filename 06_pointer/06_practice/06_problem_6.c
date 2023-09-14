# include<stdio.h>

void changeValue(int a);

int main(){
    int a=6;
    changeValue(a);
    printf("The value of a is %d \n", a);
    
    return 0;
}

// call by variable does not change the value of variable 
// whereas call by reference can change the value of variable.

void changeValue(int a){
    int temp = 10*a;
    a = temp;
    return;
}
