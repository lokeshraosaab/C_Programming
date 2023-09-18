# include<stdio.h>
# include<string.h>

int main(){
    char st[] = "Lokesh";
    int a = strlen(st);
    printf("The no. of characters (i.e. length of the string) in the string st is %d \n", a);
    char name[] = "Lokesh Rao Sahab";
    int b = strlen(name);
    printf("The no. of characters (i.e. length of the string) in the string name is %d \n", b);

    return 0;
}
// strlen() function is used to count the number of characters in the string excluding the null ('\0')
// but no. of spaces are counted .