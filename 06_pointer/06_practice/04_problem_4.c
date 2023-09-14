# include<stdio.h>

void sumAndAvg(int a, int b, int *c, float *d);

int main(){
    int i = 5, j = 6, sum;
    float avg;
    sumAndAvg(i, j, &sum, &avg);
    printf("The sum of a and b is %d \n", sum);
    printf("The average of a and b is %f \n", avg);

    
    return 0;
}

void sumAndAvg(int a, int b, int *c, float *d){
    *c = a + b;
    *d = *c/2.0;
    return;
}