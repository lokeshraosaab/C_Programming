# include<stdio.h>

int main(){
    //Write a program to find grade of a student given his marks based on below.
    int marks;
    printf("Your marks are 0-100 \n");
    scanf("%d", &marks);
    if(marks>=90 && marks<=100){
        printf("Your grade is A");
    }
    else if(marks>=80 && marks<90){
        printf("Your grade is B");
    }
    else if(marks>=70 && marks<80){
        printf("Your grade is C");
    }
    else if(marks>=60 && marks<70){
        printf("Your grade is D");
    }
    else if(marks<60 && marks>=0){
        printf("Your grade is F");
    }
    else{
        printf("Your marks are invalid");
    }
      
    return 0;
}