# include<stdio.h>
# include<stdlib.h>


int main(){
    int *ptr;
    ptr = (int*)malloc(10*sizeof(int));
    if(ptr == NULL){
        printf("Memory Allocation failed ...");
    }
    else {
        printf("Memory Allocation Succeed");
    }
    free(ptr);
    return 0;
}