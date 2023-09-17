# include<stdio.h>
void reverse(int *ptr, int n){
    for(int i =0; i<n/2; i++){
        int temp = *(ptr+i);
        *(ptr+i) = *(ptr+n-1-i);
        *(ptr+n-1-i) = temp;
    }
}

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    reverse(array,10);
    for(int i=0; i<10; i++){
        printf("The value of element %d OR arr[%d] is %d\n", i+1, i, array[i]);
    }
    
    return 0;
}