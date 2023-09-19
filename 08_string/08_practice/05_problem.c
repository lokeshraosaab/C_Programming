# include<stdio.h>
void my_strcpy(char s1[], char s2[]){
    int i=0;
    while(s2[i]!='\0'){
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
}


int main(){
    char s1[50] = "Rao Sahab";
    char s2[7] = "Lokesh";
    my_strcpy(s1, s2);
    puts(s1);
    puts(s2);
    return 0;
}