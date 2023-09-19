# include<stdio.h>
# include<string.h>

int main(){
    char s1[50];
    
    char s2[50];
    char c;
    int i=0;
    printf("Enter characters of string s1 character by character:- \n");
    while(c!='\n'){
        fflush(stdin);
        scanf("%c", &c);
        s1[i] = c;
        i++;
    }
    //s1[i] = '\0'; // --> This will not give strcmp value 0 if we give same inputs to both s1 & s2.
    //                  because for come out from while loop we are adding '\n' as character on pressing enter key finally in the end.
    // in this case s1 have one more character than s2 as '\n' . In s2 we are giving inputs by %s.
    s1[i-1] = '\0'; //--> By this we are replaced '\n' by '\0' .
    printf("Enter characters of string s2:- ");
    scanf("%s", s2);

    printf("%s \n", s1);
    printf("%s \n", s2);
    printf("strcmp value for these strings is %d \n", strcmp(s1,s2));

    return 0;
}
// Enter key is valid input for character. Here we are using scanf for characters
// afterall we are using scanf in loop so our enter key is picked by forward loop.
// that's why we are using fflush(stdin); for get out from this problem. 