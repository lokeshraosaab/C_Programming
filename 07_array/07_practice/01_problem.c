# include<stdio.h>

int main(){
    //int arr[10];
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr = &arr[0];
    int a = *(ptr+2);
   // int b = *(&arr[2]);
    if(a==3){
   //    if(a==b){
        printf("Verified");
    }

    else {
        printf("Not Verified");
    }

    return 0;
}