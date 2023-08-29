# include<stdio.h>

int main(){
    float principal = 1000, time = 3, rate = 4;
    float SimpleInterest;
    SimpleInterest = (principal*time*rate)/100;
    printf("SimpleInterest is %f \n", SimpleInterest);
    return 0;
}