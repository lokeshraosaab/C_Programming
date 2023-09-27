# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptr1;
    int *ptr2;
    ptr1 = (int*)malloc(60*sizeof(int));
    for(int i = 0; i<60; i++){
        ptr2 = (int*)malloc(6000*sizeof(int));
        free(ptr2);   // if here we do not use free(ptr2) --> then we can clearly observe a fast change
        // in memory size used by this file in the task manager with every new loop performing.
        // so we have to use free(ptr2) for free this memory used by this file with every new loop.
        printf("Enter the value of element %d :- ", i+1);
        scanf("%d", &ptr1[i]);
    }
    for(int i = 0; i<60; i++){
        printf("The value of element %d is:-  %d \n", i+1, ptr1[i]);
    }
    free(ptr1);
    
    return 0; 
}