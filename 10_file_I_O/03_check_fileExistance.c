# include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("LokeshYadav.txt", "r");
  //  ptr = fopen("Lokesh.txt", "r");

    if(ptr==NULL){
        printf("This file does not exist.\n");
    }
    else{
    int num1, num2;
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    printf("The value of num1 is %d \n", num1);
    printf("The value of num2 is %d \n", num2);
    }
    return 0;
}