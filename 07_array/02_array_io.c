# include<stdio.h>

int main(){
    int marks[4]; // allocates space for 4 integers 
    printf("Enter the value of marks for student 1:- ");
    scanf("%d", &marks[0]);
    printf("Enter the value of marks for student 2:- ");
    scanf("%d", &marks[1]);
    printf("Enter the value of marks for student 3:- ");
    scanf("%d", &marks[2]);
    printf("Enter the value of marks for student 4:- ");
    scanf("%d", &marks[3]);

    printf("The marks of student 1 is %d \n", marks[0]);
    printf("The marks of student 2 is %d \n", marks[1]);
    printf("The marks of student 3 is %d \n", marks[2]);
    printf("The marks of student 4 is %d \n", marks[3]);


    return 0;
}