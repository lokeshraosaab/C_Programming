# include<stdio.h>

int main(){
    int i=0;
    // int i=220; if we executes this one after commenting above one . then it execute 
    // & output will be 220 . whether it is does not follow the while condition .
    // that is bcz of do while loop first executes code then check the condition.
    // so it is a while loop which executes at least once.
    do{
    printf("The value of i is %d \n", i);
    i++ ;  
    }while(i<=10);
    return 0;
}