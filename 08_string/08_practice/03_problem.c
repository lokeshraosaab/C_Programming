# include<stdio.h>

int strlen(char *ptr){
int n=0;
while(*ptr!='\0'){
    n++;
    ptr++;
}
return n;
}

int main(){
    char name[] = "Lokesh";
    int length=strlen(name);
   printf("The length of the string name is %d \n", length);

    
    return 0;
}