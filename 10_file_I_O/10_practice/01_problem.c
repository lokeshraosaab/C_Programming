# include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("01_problem.txt", "r");
    int num1, num2, num3;
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    fclose(ptr);
    printf("The integers have been read are %d, %d, %d\n", num1, num2, num3);
    return 0;
}