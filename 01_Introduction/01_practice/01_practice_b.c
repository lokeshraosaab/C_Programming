# include<stdio.h>

int main(){
    int length;
    int breadth;
    
    printf("What is the length of the rectangle \n");
    scanf("%d", &length);

    printf("What is the breadth of the rectangle \n");
    scanf("%d", &breadth);
    int area = length*breadth;
    printf("Area of the given rectangle is %d \n", area);




    
    return 0;
}