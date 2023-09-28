# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));
    for(int i=0; i<5; i++){
        printf("Enter the value of element %d ptr[%d] :- ", i+1, i);
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<5; i++){
        printf("The value of element %d ptr[%d] is:- %d\n", i+1, i, ptr[i]);
    }
    
    ptr = realloc(ptr, 10*sizeof(int));
    
     for(int i=0; i<10; i++){
        printf("Enter the value of element %d ptr[%d] :- ", i+1, i);
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<10; i++){
        printf("The value of element %d ptr[%d] is:- %d\n", i+1, i, ptr[i]);
    }
    return 0;
}