# include<stdio.h>
# include<math.h>

int main(){
    int side;
    printf("The value of side of square is ");
    scanf("%d", &side);
    printf("The value of area of square of side %d is %f \n", side, pow(side,2));
    return 0;
}