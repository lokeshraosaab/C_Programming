# include<stdio.h>

int main(){
    int s[3];        // In any general array int arr[] ---> we can say arr is a pointer having address arr[0] i.e. 
    // everywhere int *ptr = &arr[0] = arr is hidden;
    //int *ptr= &s[0];
    int a = *(&s[2]);
    int b = *(s+3);
    int c = *(s+2);
    if(a==b){
        printf("True \n");
    }
    else{
    printf("False \n");
    }
    if(a==c){
        printf("My concept is OK");
    }
    return 0;
}