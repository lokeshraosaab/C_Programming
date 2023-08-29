
# include<stdio.h>

int main(){
    float celcius,far;
    printf("Enter the value of the temperature in celcius \n");
    scanf("%f", &celcius);
    far = (celcius * 9/5)+32;
    printf("The value of this celcius temperature in farenheit is %f \n",far);
    return 0;
}