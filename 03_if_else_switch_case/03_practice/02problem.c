# include<stdio.h>

int main(){
    int Maths, Phy, Chem;
    float total;
    printf("Enter your marks out of 100 in Maths\n");
    scanf("%d", &Maths);
    printf("Enter your marks out of 100 in Phy\n");
    scanf("%d", &Phy);
    printf("Enter your marks out of 100 in Chem\n");
    scanf("%d", &Chem);
    total=(Maths+Phy+Chem)/3 ;
    

    if(total<40 || Phy<33 || Maths<33 || Chem<33){
        printf("Your total percentage is %f and Your are fail \n", total);
    }
    else{
        printf("Your percentage is %f and you are pass \n", total);
    }
    return 0;
}