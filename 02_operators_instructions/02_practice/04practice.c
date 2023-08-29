# include<stdio.h>

int main(){
    // Q Explain step by step evaluation of 3*x/y -z+R Where x=2 y=3 z=3 R=1 .
    int x, y, z, R;
    x=2; y=3; z=3; R=1;
    int d=3*x/y -z+R;
    printf("The value of d is %d\n", d);
    // 3*2/3 -3+1
    // 6/3 -3+1
    // 2-3+1
    // -1+1
    // 0
    
    return 0;
}