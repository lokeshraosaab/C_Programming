# include<stdio.h>

int main(){
    int i=8;
    int *j;
    j=&i;
    int **k; 
    k = &j;
    printf("Add i = %u \n", &i);
    printf("Add j = %u \n", &j);
    printf("Add k = %u \n", &k);

    printf("value i = %d \n", i);
    printf("value i = %d \n", *(&i));
    printf("value i = %d \n", *j);

    printf("value j = %d \n", *(&j));
    printf("value j = %d \n", *k);

    printf("value k = %d \n", *(&k));




    return 0;
}