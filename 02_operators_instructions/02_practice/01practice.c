# include<stdio.h>

int main(){
  //  int a; b=a; ----> it is invalid in C, first we have to declared what is b as int b; or float b;
  int a; int b=a;
  int v=3^3 ; // it is valid in C , but it will not answer according to the 3 to the power 3
  printf("The value of v is %d\n", 3^3);
  //char dt='21'; // it is invalid in C, bcz character means just only single digit ,or just only single alphabet.
  char dt='2';
    return 0;
}