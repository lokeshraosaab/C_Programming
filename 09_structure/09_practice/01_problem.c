# include<stdio.h>

struct vector{
    int x;
    int y;
};

int main(){
  struct vector v1, v2;
  v1.x = 4;
  v1.y = 5;
  printf("X dimension of vector v1 is %d and Y dimension of vector v1 is %d \n", v1.x, v1.y);  
  v2.x = 7;
  v2.y = 9;
  printf("X dimension of vector v2 is %d and Y dimension of vector v2 is %d \n", v2.x, v2.y);  

    return 0;
}