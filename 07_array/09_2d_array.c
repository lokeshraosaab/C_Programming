# include<stdio.h>

void display(int *ptr, int n){
    printf("int array[3][2] = {");
   for(int i=0; i<n; i++){
       printf("%d, ", *ptr++);
   }
   printf("};");
}

int main(){
    int array[3][2];
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("Enter the element of the array:- array[%d][%d] =  ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    display(&array[0][0],6);

    return 0;
}