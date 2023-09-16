# include<stdio.h>

int main(){
    int arr[4] = {12,15,65,199};
    int *ptr = arr; // i.e. ptr points to index 0 like int *ptr=&arr[0];
    ptr++; // after first increment ptr points to &arr[1] and so on...
    printf("The value of arr[1] or *ptr is %d \n", *ptr);
    printf("The value of arr[2] or *ptr is %d \n", *++ptr);
    printf("The value of arr[3] or *ptr is %d \n", *++ptr);
    return 0;
}