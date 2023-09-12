# include<stdio.h>
// Write a program to print multiplications table of a given number n.
int main(){
    int i=0;
    int n;
   
    printf("Enter the value of n ");
    scanf("%d", &n);
    printf("Multiplication table of %d \n", n);
    while(i<10){
       i++;
       printf("%d \n",i*n); 
      // printf("%d \n", i+=n); //--->it will first add then print so write i+= in next row.
       
        }
    
    return 0;
}