# include<stdio.h>
float tempConverter(float a);

int main(){
    float celcius;
    printf("Enter the value of celcius to be converted in farenheit \n");
    scanf("%f", &celcius);
    printf("The value of %f celcius temperature in farenheit is %f ", celcius, tempConverter(celcius));
    
    return 0;
}

float tempConverter(float a){
    float farenheit;
    farenheit =(a * 9.0/5.0) + 32;
    return farenheit;

}