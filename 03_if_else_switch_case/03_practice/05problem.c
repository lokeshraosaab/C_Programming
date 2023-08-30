# include<stdio.h>

int main(){
    // Write a program to determine whether a character is lowercase or not.
    // 97-122 --> for lowercase in ASCII Code
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    if(ch>=97 && ch<=122){
        printf("It is a lowercase\n");
    }
    else {
        printf("It is not a lowercase\n");
    }
    return 0;
}