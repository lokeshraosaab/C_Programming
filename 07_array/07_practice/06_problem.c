# include<stdio.h>

void countpositive(int *ptr, int n){
    int count = 0;
    for(int i =0; i<n; i++){
        if(*(ptr+i)>0){
            count++;
        }
    }
     printf("The number of positive integers in the given array is %d \n", count);
}

int main(){
    int array[10] = {1,-3,-5,-7,8,20,-64,4,-8,-90};
    countpositive(array,10);
    
    return 0;
}