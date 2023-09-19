# include<stdio.h>

int main(){
    char s1[] = "Lokesh Rao sahab";
    int n = 0;
    int i = 0;
    char c;
    printf("Enter your character :- ");
    scanf("%c", &c);
    while(s1[i]!='\0'){
        if(s1[i]==c){
            n++;
        }
        i++;
}
printf("The number of occurence of your character %c in the string s1 is %d", c, n);
    return 0;
}