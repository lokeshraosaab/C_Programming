# include<stdio.h>

int main(){
    FILE *ptr ;
    ptr = fopen("getcdemo.txt", "r");
    char c;
    c=fgetc(ptr);
    while(c!=EOF){
        printf("%c", c);
        c=fgetc(ptr);
    }
    fclose(ptr);
    // we can also use putc() and getc() instead of fputc and fgetc.
    // use of fputc() and fgetc() can give more feel about the files.
    
    return 0;
}