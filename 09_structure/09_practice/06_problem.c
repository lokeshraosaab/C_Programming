# include<stdio.h>

typedef struct complex {
    float real;
    float img;
}comp;

void display(comp c[], int n){
    for(int i=0; i<n; i++){
        printf("Real part of complex no.%d c[%d] is %f\n", i+1, i, c[i].real);
        printf("Imaginary part of complex no.%d c[%d] is %f\n", i+1, i, c[i].img);

    }
}

int main(){
    comp c[5];
    for(int i=0; i<5; i++){
        printf("Enter the real part of complex no.%d c[%d] : ", i+1, i);
        scanf("%f", &c[i].real);
         printf("Enter the imaginary part of complex no.%d c[%d] : ", i+1, i);
        scanf("%f", &c[i].img); 
    }
    display(c, 5);
    
    return 0;
}