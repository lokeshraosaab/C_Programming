#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("getcdemo.txt", "r");
    // fgetc(ptr);// --> used to read a character from file.
    // as many times we use fgetc as many characters we can read from file.
    // fgetc returns EOF when all the characters from a file have been read .
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    printf("%c", fgetc(ptr));
    char c= fgetc(ptr);
    printf("%c", c); //we can't print EOF but we can use it as conditions, for breaking the loop.
   
    if(c==EOF){
        printf("\n End of file");
    }

    return 0;
}