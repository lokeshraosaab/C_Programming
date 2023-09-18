# include<stdio.h>

int main(){
  
  char *ptr = "Lokesh Rao Sahab"; 
 // it is more shortcut way for initialising string using pointer.
 // This tells the compiler to store the string in memory and assigned address is stored
 // in a char pointer.
    printf("%s", ptr);
   printf("\n");
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}