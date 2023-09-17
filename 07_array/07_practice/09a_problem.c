# include<stdio.h>

void ThreeDarray(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("The address of the element %d is %u \n", i+1, ptr++);
    }
}

int main(){
    int i, j, k;
    printf("Enter i : ");
    scanf("%d", &i);
    printf("Enter j : ");
    scanf("%d", &j);
    printf("Enter k : ");
    scanf("%d", &k);
    int array[i][j][k];
    ThreeDarray(array[0][0], i*j*k);
    return 0;
}