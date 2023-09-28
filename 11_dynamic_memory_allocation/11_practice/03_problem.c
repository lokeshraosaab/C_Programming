# include<stdio.h>
# include<stdlib.h>


int main(){
    int *ptr;
    ptr = (int*)calloc(6,sizeof(int));
    ptr[6];
    for(int i=0; i<6; i++){
        printf("Enter the value of element %d ptr[%d] :- ", i+1, i);
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<6; i++){
        printf("The value of element %d ptr[%d] is:- %d\n", i+1, i, ptr[i]);
    }
    
    free(ptr);
    return 0;
}