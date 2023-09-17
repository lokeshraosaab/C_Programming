// problem 7 using function 
# include<stdio.h>

void printMulTable(int *ptr, int column, int multiplier){
        printf("The multiplication table of %d is \n", multiplier);

    for(int i=0; i<column; i++){
        ptr[i] = multiplier*(i+1);
        
    }
    for(int i=0; i<column; i++){
        printf("%d*%d = %d\n", multiplier, i+1, ptr[i]);
        
    }
    printf("\n\n");
    printf("*************************\n\n");

}

int main(){
    int mulTable[3][10];
    printMulTable(mulTable[0], 10, 2);
    printMulTable(mulTable[1], 10, 3);
    printMulTable(mulTable[2], 10, 9);
    return 0;
}