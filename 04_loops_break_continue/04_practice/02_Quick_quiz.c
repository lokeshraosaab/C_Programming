# include<stdio.h>
//  Write a program to print first n natural numbers using do while loop .
int main(){
    int i=0;
    int n;
    printf("Enter the value of n ");
    scanf("%d", &n);
    
    do{
       // if(i>0){ for use  if(i>0) replace i+1 to i & i<n to i<=n .
        printf("%d\n", i+1);
      //  }
        i++;
    }while(i<n);

    return 0;
}