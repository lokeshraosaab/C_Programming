// Implement problem 10 using while loop 
# include<stdio.h>

int main(){
    int i=2;
    int n;
    int prime=1;
    printf("Enter the number \n");
    scanf("%d", &n);
    while(i<n){
        if(n%i==0){
            prime=0;
            break;
        }
        i++;
    }
    if(prime==0){
        printf("The number %d is not a Prime number", n);
    }
    else{
        printf("The number %d is a prime number", n);
    }
    return 0;
}