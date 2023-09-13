# include<stdio.h>
float weight(float a, float b);

int main(){
    float mass;
    float g = 9.8;
    printf("Enter the mass of the body in Kgs \n");
    scanf("%f", &mass);
    printf("Force of attraction on a body of mass %f exerted by the earth in Newton is %.2f", mass, weight(mass, g));
    // --> .2f% means decimal number upto two places after the decimal.
    // ---> .3f% means decimal number upto three places after the decimal.
    return 0;
}

float weight(float a, float b){
    float weight;
    weight = a*b;
    return weight;
}