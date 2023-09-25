# include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("generated.txt", "w");
    int num1=500;
    int num2=250;
    fprintf(ptr, "The number num1 is %d \n", num1);
    fprintf(ptr, "The number num2 is %d \n", num2);
    fclose(ptr);
    return 0;
}