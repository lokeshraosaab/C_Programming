# include<stdio.h>
float average(int a, int b, int c);

int main(){
    int x, y, z;
    printf("Enter Your three numbers \n");
    scanf("%d %d %d", &x, &y, &z);
    printf("Average of your three numbers %d, %d, %d is %f", x, y, z, average(x, y, z));
    
    return 0;
}

float average(int a, int b, int c){
    float avg;
    avg =(float)(a + b + c)/3.0 ; // ---> we should use (float) or 3.0 for returning float instead of integer. 
    return avg;
}