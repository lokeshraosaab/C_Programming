# include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("02_problem.txt", "w");
    int num;
    printf("Enter the value of num:- ");
    scanf("%d", &num);
    for(int i=1; i<=10; i++){
        fprintf(ptr, "%d*%d = %d\n", num, i, num*i);
    }
    fclose(ptr);
    printf("Successfully generated table of %d to 02_problem.txt", num);
    return 0;
}