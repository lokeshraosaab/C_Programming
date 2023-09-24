# include<stdio.h>

typedef struct complex{
    float realpart;
    float imgpart;
}comp;

int main(){
    comp c1, c2;
    c1.realpart = 5;
    c1.imgpart = 7;
     c2.realpart =13;
    c2.imgpart = 8;
    printf("Real part of complex no. c1 is %f and imaginary part of complex no. c1 is %f \n", c1.realpart, c1.imgpart);
    printf("Real part of complex no. c2 is %f and imaginary part of complex no. c2 is %f \n", c2.realpart, c2.imgpart);
    
    return 0;
}