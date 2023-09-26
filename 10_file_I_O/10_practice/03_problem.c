#include <stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("03_problem.txt", "r");
    ptr2 = fopen("03_problem_twice.txt", "w");
    char c = fgetc(ptr1);
    while (c != EOF)
    {
        fputc(c, ptr2);
        //  fputc(c, ptr2);
        printf("%c", c);
        c = fgetc(ptr1);
    }
    fprintf(ptr2, "\n");
    FILE *ptr3;
    ptr3 = fopen("03_problem.txt", "r");
    char d = fgetc(ptr3);
    while(d!=EOF){
        fputc(d, ptr2);
        d=fgetc(ptr3);
    }
    
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);
    return 0;
}