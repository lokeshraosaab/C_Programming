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
            n = 1;
            break;
        }
        i++;
}

if(n==1){
    printf("Yes, Your character %c is present in string s1 \n", c);
}
else {
    printf("No, Your character %c is not present in string s1 \n", c);

}
    return 0;
}