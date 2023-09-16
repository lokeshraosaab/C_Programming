# include<stdio.h>

// void printArray(int *ptr, int n){
//     for(int i=0; i<n; i++){
//         printf("The value of element %d of arr array is:  %d\n", i+1, *(ptr+i));
//         ptr[2]=100; // This value will change in arr array of main as well .
//     }
// }

void printArray(int ptr[], int n){
    for(int i=0; i<n; i++){
        printf("The value of element %d of arr array is:  %d\n", i+1, ptr[i]);
        ptr[2]=100; // This value will change in arr array of main as well .
    }
}


int main(){
    int arr[] = {21,622,92,505,7777,98,56};
    printf("arr[2] = %d before function call \n", arr[2]);
    printArray(arr,7); // we will pass reference in both type of function prototype.
    printf("arr[2] = %d after function call \n", arr[2]);

    
    
    return 0;
}