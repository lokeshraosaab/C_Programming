# include<stdio.h>

void display(int *ptr, int n){
    for(int i=0; i<n; i++){
        *ptr=5*(i+1);
        ptr++;
    }
}

int main(){
    int arr[10];
    display(arr,10);
    for(int i=0; i<10; i++){
        printf("5*%d = %d\n", i+1, arr[i]);
    }
    return 0;
}