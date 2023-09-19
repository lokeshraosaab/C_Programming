# include<stdio.h>

void decrypt(char *ptr){
    while(*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
    return;
}

// In above decrypt(char *ptr) function --> *ptr = *ptr - 1 here 1 is subtracting from the 
// ASCII value of its characters. now respective characters will be decrypt to the previous 
// characters according to the ASCII value.

int main(){
    char s1[] = "Lokesh Rao Sahab"; //"Mplfti!Sbp!Tbibc";
    decrypt(s1);
    puts(s1);
    return 0;
}