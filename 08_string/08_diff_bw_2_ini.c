# include<stdio.h>

int main(){
    char *ptr = "Lokesh Rao Sahab"; // --> Can be reinitialized.
    ptr= "Yadav Ji";
    // char ptr[] = "Lokesh Rao Sahab";// ---> it can't be reinitialized.
    // ptr [] = "Yadav Ji";
    puts(ptr);
    return 0;
}