# include<stdio.h>

void printpattern(int n);

int main(){
    int n;
    printf("Enter the value of n  = no of lines of pattern = ");
    scanf("%d", &n);
    printpattern(n);
    
    return 0;
}

void printpattern(int n){
    for(int i=1; i<=n; i++){
    for(int c=0; c<2*i-1; c++){
        printf("*");
    }
    printf("\n");
}
return;
}
