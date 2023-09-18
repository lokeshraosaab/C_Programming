# include<stdio.h>

int main(){
    char st[] = "Lokesh";
//   char st[7] = {'L', 'o', 'k', 'e', 's', 'h', '\0'};
// both initialisation will give same result always .

    char *ptr = st;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}