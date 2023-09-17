# include<stdio.h>

int main(){
    int array[4][3][2] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    int count=1;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<2; k++){
                
                printf("The address of the element %d = array[%d][%d][%d] is %u \n", count++, i, j, k, &array[i][j][k]);
            }
        }
    }
    return 0;
}  