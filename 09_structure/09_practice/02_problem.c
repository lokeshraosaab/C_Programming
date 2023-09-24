# include<stdio.h>

typedef struct vector{
    int x;
    int y;
}vec;

vec sumvector(vec v1, vec v2){
    vec result;
    result.x = v1.x + v2.x ;
    result.y = v1.y + v2.y ;
    return result;
}

int main(){
    vec v1, v2, sum;
    v1.x = 4;
    v1.y = 5;
    v2.x = 7;
    v2.y = 9;
    sum = sumvector(v1, v2);
    printf("X dimension of sum of vectors v1 and v2 is %d\n And Y dimension of sum of vectors v1 and v2 is %d\n", sum.x, sum.y);
    
    return 0;
}