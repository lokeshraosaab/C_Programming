# include<stdio.h>
// This is not clear to me . Doubted
int main(){
    float income;
    printf("Enter your income amount in Lac \n");
    scanf("%f", &income);
    if(income<2.5){
        printf("You are tax free");
    }
    else if(income>=2.5 & income<5.0){
        printf("Your tax is 5 percent that is %f lac\n", income/20);
    }
    else if(income>=5.0 & income<10.0){
        printf("Your tax is 20 percent that is %f lac\n", income/5);
    }
    else if(income>=10.0){
        printf("Your tax is 30 percent that is %f lac\n", income*3/10);
    }
    return 0;
}