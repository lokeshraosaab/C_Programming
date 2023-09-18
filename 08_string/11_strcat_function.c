# include<stdio.h>
# include<string.h>

int main(){
    char s1[30] = "Lokesh";
    char s2[] = "Rao Sahab";
    strcat(s1,s2); //--> s1 now contains s1+s2 without space b/w s1 & s2. Now s1 contains "LokeshRao Sahab"
    puts(s1);
    puts(s2); //--> No change will be on s2 . s2 will will remains same.
    
    return 0;
}