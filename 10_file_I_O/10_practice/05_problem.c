# include<stdio.h>

int main(){
    FILE *ptr1;
    ptr1 = fopen("05_problem.txt", "r");
    int num;
    fscanf(ptr1, "%d", &num);
    printf("The value of the integer in the file 05_problem.text is %d\n", num);
    FILE *ptr2;
    ptr2 = fopen("05_problem.txt", "w");
    fprintf(ptr2, "%d", 2*num);
    printf("Succesfully done . The value of the integer is modified to double its value in the file 05_problem.txt\n");
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}