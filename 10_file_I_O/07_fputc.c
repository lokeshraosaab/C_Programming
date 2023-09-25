#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("putcdemo.txt", "w");
    fputc('t', ptr);
    fputc('h', ptr);
    fputc('i', ptr);
    fputc('s', ptr);
    fputc(' ', ptr);
    fputc('i', ptr);
    fputc('s', ptr);
    fputc(' ', ptr);
    fputc('p', ptr);
    fputc('u', ptr);
    fputc('t', ptr);
    fputc('c', ptr);
    fputc(' ', ptr);
    fputc('d', ptr);
    fputc('e', ptr);
    fputc('m', ptr);
    fputc('o', ptr);
    fputc(' ', ptr);
    fputc('f', ptr);
    fputc('i', ptr);
    fputc('l', ptr);
    fputc('e', ptr);
    fputc('.', ptr);
    return 0;
}