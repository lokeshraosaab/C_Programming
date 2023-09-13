# include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Enter the value of n:- ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is %d", n, sum(n));
    
    return 0;
}

int sum(int n){
if(n==1 || n==2){
    return 2*n - 1;
}
else {
    return n + sum(n-1);
}

}

