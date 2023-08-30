# include<stdio.h>

int main(){
    int a=10;
   // printf("Enter value of a \n");
   // scanf("%d", &a);
    
    if(a==11){    // a==11 it is equality check if we input a==11 after that we will get true statement. otherwise we get false statement.

        printf("I am 11\n");
    }
    else{
        printf("I am not 11\n");
    }
    if(a=11){    // a=11 it assignment operator here it will considered as non zero value so it will always give true statement.
        printf("I am 11");
    }
    else {
        printf("I am not 11");
    }


    return 0;
}