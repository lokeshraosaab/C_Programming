# include<stdio.h>
# include<string.h>

int main(){
    char s1[] = "Joke"; //"RaoSahab";
    char s2[] = "for"; //"RaoLokesh";
    int val = strcmp(s1,s2);
    printf("Now the val is %d ", val);
    return 0;
}