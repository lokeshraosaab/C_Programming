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
    int column, multiplier1, multiplier2, multiplier3;
    
    printf("Enter value of column : ");
    scanf("%d", &column);
    printf("Enter value of multiplier1 : ");
    scanf("%d", &multiplier1);
    printf("Enter value of multiplier2 : ");
    scanf("%d", &multiplier2);
    printf("Enter value of multiplier3 : ");
    scanf("%d", &multiplier3);
    int mulTable[3][column];
    printMulTable(mulTable[0], column, multiplier1);
    printMulTable(mulTable[0], column, multiplier2);
    printMulTable(mulTable[0], column, multiplier3);

    return 0;
}