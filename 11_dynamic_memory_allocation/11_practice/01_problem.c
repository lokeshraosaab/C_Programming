# include<stdio.h>
# include<stdlib.h>


int main(){
    int *ptr;
    ptr = (int*)malloc(6*sizeof(int));
    ptr[6];
    free(ptr);
    return 0;
}