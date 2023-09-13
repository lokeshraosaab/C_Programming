# include<stdio.h>
void display(); // --> Function prototype

int main(){
    int a;
    printf("Initializing display function . \n");
    display(); // --> Function Call
    printf("Display Function finished its work . \n");
    
    return 0;
}
// Function Definition 
void display(){
    printf("Hello, I am display . \n");
}