#include <stdio.h>

int main()
{
    char name[] = "Lokesh Rao Sahab";
    printf("%s", name); // it is shortcut way for print string .

    printf("\n");

    char *ptr = name;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}