# include<stdio.h>

void encrypt(char *ptr){
    while(*ptr!='\0'){
        *ptr = *ptr +1;
        ptr++;
    }
    return;
}

// In above encrypt(char *ptr) function --> *ptr = *ptr + 1 here 1 is adding to the 
// ASCII value of its characters. now respective characters will be encrypt to the next 
// characters according to the ASCII value.

int main(){
    char s1[] = "Lokesh Rao Sahab";
    encrypt(s1);
    puts(s1);
    return 0;
}