# include<stdio.h>
# include<string.h>

int main(){
    char source[] = "Rao Sahab";
    char target[11] = "Lokesh";
    printf("Target String before strcpy function applied is %s \n", target);
        printf("Source String before strcpy function applied is %s \n", source);

    strcpy(target, source); //-->Function is used to copy the content of second (source) string
    // into first (target) string passed to it. now target string already contained value is replaced 
    // by copied value from source string. Source string will be same as it was before strcpy applied.
    printf("Target String after strcpy function applied is %s \n", target);
    printf("source String before strcpy function applied is %s \n", source);

    return 0;
}