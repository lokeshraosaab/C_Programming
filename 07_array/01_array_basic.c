# include<stdio.h>

int main(){
    // This is Naive way to creat 4 ints 
    // int marks1, marks2, marks3, marks4;
    // marks1=20;
    // marks2=03;
    // marks3=67;
    // marks4=56;

    // we can also create 4 or more ints in very easy way by using arrays.
    int marks[4]; // ---->For general it allocates space for 4 integers.
    // for understanding keep in mind only we can say it contains 4 variables like marks[0],
    // marks[1], marks[2], marks[3] -->these all behave as variable  for printf, scanf etc contain values.
    marks[0]=20;
    marks[1]=03;
    marks[2]=67;
    marks[3]=56;
    // array index always starts with 0. 

    return 0;
}