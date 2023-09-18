# include<stdio.h>

int main(){
    char name[50];
    printf("Enter Your name :- ");
    //scanf("%s", &name[0]);
    scanf("%s", name); // ---> Here name ---> &name[0]
    printf("Your name is %s ", name);
    return 0;
}